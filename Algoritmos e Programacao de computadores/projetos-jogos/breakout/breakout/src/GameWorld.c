/**
 * @file GameWorld.c
 * @author Prof. Dr. David Buzatto
 * @brief GameWorld implementation.
 *
 * @copyright Copyright (c) 2026
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "raylib/raylib.h"

#include "Alvo.h"
#include "Bolinha.h"
#include "GameWorld.h"
#include "Jogador.h"
#include "ResourceManager.h"

/* Constantes do jogo*/
#define VIDAS_INICIAIS   3
#define PONTOS_POR_ALVO  100
#define VEL_INI_X        200.0f   /* velocidade horizontal inicial da bolinha */
#define VEL_INI_Y       -250.0f   /* velocidade vertical inicial (para cima)  */
#define LARGURA_JOGADOR  150
#define ALTURA_JOGADOR   20

static void resolverColisaoBolinhaJogador( Bolinha *b, Jogador *j );
static void resolverColisaoBolinhaAlvos( GameWorld *gw, Bolinha *b );
static int  contarAlvosVivos( GameWorld *gw );
static void sortearAlvoEspecial( GameWorld *gw );
static void desativarBolinhasExtras( GameWorld *gw );
static void spawnBolinhaExtra( GameWorld *gw, Vector2 pos );


/** 
 * Reposiciona jogador e bolinha nas posicoes iniciais.
 * Chamada no inicio do jogo e apos perder cada vida.
 */
static void resetarBolinhaEJogador( GameWorld *gw ) {
    gw->jogador.ret.x = GetScreenWidth()  / 2.0f - LARGURA_JOGADOR / 2.0f;
    gw->jogador.ret.y = GetScreenHeight() - 3 * ALTURA_JOGADOR;

    gw->bolinha.centro.x = GetScreenWidth() / 2.0f;
    gw->bolinha.centro.y = gw->jogador.ret.y - 30.0f;

    /* sorteia aleatoriamente a direcao horizontal inicial */
    gw->bolinha.vel.x = ( GetRandomValue( 0, 1 ) == 0 ) ?  VEL_INI_X : -VEL_INI_X;
    gw->bolinha.vel.y = VEL_INI_Y;
}

/**
 * Reinicia o jogo completamente: pontuacao, vidas, alvos e posicoes.
 * Precisa pressionar R nas telas de Game Over/Vitoria para reiniciar o jogo.
 */
static void reiniciarJogo( GameWorld *gw ) {
    gw->pontuacao = 0;
    gw->vidas     = VIDAS_INICIAIS;
    gw->estado    = PAUSADO;
    gw->nivelDificuldade = 0;

    resetarBolinhaEJogador( gw );
    sortearAlvoEspecial( gw );
    desativarBolinhasExtras( gw );

    for ( int i = 0; i < gw->lin * gw->col; i++ ) {
        gw->alvos[i].hp = 1;
    }
}

static void resolverColisaoBolinhaJogador( Bolinha *b, Jogador *j ) {
    if ( CheckCollisionCircleRec( b->centro, b->raio, j->ret ) ) {

        b->centro.y = j->ret.y - b->raio;
        b->vel.y = -fabs( b->vel.y );

        float centroRaquete = j->ret.x + j->ret.width / 2.0f;
        float offset        = ( b->centro.x - centroRaquete ) / ( j->ret.width / 2.0f );
        float novaVelX      = offset * 300.0f;

        if ( novaVelX > -60.0f && novaVelX < 60.0f ) {
            novaVelX = ( offset >= 0.0f ) ? 60.0f : -60.0f;
        }
        b->vel.x = novaVelX;
    }
}
static void resolverColisaoBolinhaAlvos( GameWorld *gw, Bolinha *b ) {
    int quantidade = gw->lin * gw->col;

    for ( int i = 0; i < quantidade; i++ ) {
        Alvo *alvo = &gw->alvos[i];

        if ( alvo->hp > 0 && CheckCollisionCircleRec( b->centro, b->raio, alvo->ret ) ) {

            alvo->hp--;
            gw->pontuacao += PONTOS_POR_ALVO;

            /* alvo especial: ao quebrar, libera uma bolinha extra */
            if ( alvo->especial ) {
                Vector2 posSpawn = {
                    alvo->ret.x + alvo->ret.width  / 2.0f,
                    alvo->ret.y + alvo->ret.height / 2.0f
                };
                spawnBolinhaExtra( gw, posSpawn );
            }

            float centroAlvoX = alvo->ret.x + alvo->ret.width  / 2.0f;
            float centroAlvoY = alvo->ret.y + alvo->ret.height / 2.0f;
            float overlapX = ( b->raio + alvo->ret.width  / 2.0f ) - fabs( b->centro.x - centroAlvoX );
            float overlapY = ( b->raio + alvo->ret.height / 2.0f ) - fabs( b->centro.y - centroAlvoY );

            if ( overlapX < overlapY ) {
                b->centro.x = ( b->centro.x < centroAlvoX )
                              ? alvo->ret.x - b->raio
                              : alvo->ret.x + alvo->ret.width + b->raio;
                b->vel.x = -b->vel.x;
            } else {
                b->centro.y = ( b->centro.y < centroAlvoY )
                              ? alvo->ret.y - b->raio
                              : alvo->ret.y + alvo->ret.height + b->raio;
                b->vel.y = -b->vel.y;
            }
        }
    }
}

static int contarAlvosVivos( GameWorld *gw ) {
    int count = 0;
    for ( int i = 0; i < gw->lin * gw->col; i++ ) {
        if ( gw->alvos[i].hp > 0 ) count++;
    }
    return count;
}

static void sortearAlvoEspecial( GameWorld *gw ) {
    int total = gw->lin * gw->col;
    for ( int i = 0; i < total; i++ ) {
        gw->alvos[i].especial = false;
    }
    int idx = GetRandomValue( 0, total - 1 );
    gw->alvos[idx].especial = true;
}

static void desativarBolinhasExtras( GameWorld *gw ) {
    for ( int i = 0; i < MAX_BOLINHAS_EXTRAS; i++ ) {
        gw->bolinhasExtras[i].ativa = false;
    }
}

static void spawnBolinhaExtra( GameWorld *gw, Vector2 pos ) {
    for ( int i = 0; i < MAX_BOLINHAS_EXTRAS; i++ ) {
        if ( !gw->bolinhasExtras[i].ativa ) {
            gw->bolinhasExtras[i].centro = pos;
            gw->bolinhasExtras[i].raio   = 10;
            gw->bolinhasExtras[i].cor    = YELLOW;
            gw->bolinhasExtras[i].vel.x  = ( GetRandomValue( 0, 1 ) == 0 ) ? VEL_INI_X : -VEL_INI_X;
            gw->bolinhasExtras[i].vel.y  = VEL_INI_Y;
            gw->bolinhasExtras[i].ativa  = true;
            break;
        }
    }
}

GameWorld *createGameWorld( void ) {

    GameWorld *gw = (GameWorld*) malloc( sizeof( GameWorld ) );
    gw->nivelDificuldade = 0;
    
    /* jogador */
    gw->jogador = (Jogador) {
        .ret = {
            .x      = GetScreenWidth()  / 2.0f - LARGURA_JOGADOR / 2.0f,
            .y      = GetScreenHeight() - 3 * ALTURA_JOGADOR,
            .width  = LARGURA_JOGADOR,
            .height = ALTURA_JOGADOR
            
        },
    
        .velocidadeBase = 300.0f,
        .velocidadeAtual = 0,
        .cor = WHITE
    };

    /* bolinha (comeca logo acima da raquete) */
    gw->bolinha = (Bolinha) {
        .centro = {
            .x = GetScreenWidth() / 2.0f,
            .y = gw->jogador.ret.y - 30.0f
        },
        .raio = 10,
        .vel  = { VEL_INI_X, VEL_INI_Y },
        .cor  = WHITE
    };

    /* grade de alvos */
    gw->lin = 10;
    gw->col = 6;
    gw->alvos = (Alvo*) malloc( sizeof( Alvo ) * gw->lin * gw->col );

    Color coresAlvos[] = {
        { 100, 200,  50, 255 },
        GetColor( 0x0099CCFF ),
        BLUE,
        GREEN,
        ORANGE,
        RED,
        WHITE,
        PURPLE,
        YELLOW,
        DARKGREEN
    };

    int larguraAlvo  = 80;
    int alturaAlvo   = 20;
    int espaco       = 5;
    int larguraTotal = larguraAlvo * gw->col + espaco * ( gw->col - 1 );
    int xIni         = GetScreenWidth()  / 2 - larguraTotal / 2;
    int yIni         = 150;

    for ( int i = 0; i < gw->lin; i++ ) {
        for ( int j = 0; j < gw->col; j++ ) {
            int p = i * gw->col + j;
            gw->alvos[p] = (Alvo) {
                .ret = {
                    .x      = xIni + j * ( larguraAlvo + espaco ),
                    .y      = yIni + i * ( alturaAlvo  + espaco ),
                    .width  = larguraAlvo,
                    .height = alturaAlvo
                },
                .cor = coresAlvos[i],
                .hp  = 1
            };
        }
    }
    /* sorteia o alvo especial e zera as bolinhas extras */
    sortearAlvoEspecial( gw );
    desativarBolinhasExtras( gw );

    /* estado inicial */
    gw->pontuacao = 0;
    gw->vidas     = VIDAS_INICIAIS;
    gw->estado    = PAUSADO;

    return gw;
}

void destroyGameWorld( GameWorld *gw ) {
    if ( gw != NULL ) {
        free( gw->alvos ); 
        free( gw );
    }
}


void updateGameWorld( GameWorld *gw, float delta ) {

    switch ( gw->estado ) {

        case PAUSADO:
            if ( IsKeyPressed( KEY_SPACE ) ) {
                gw->estado = JOGANDO;
            }
            break;

        case JOGANDO:
            entradaJogador(   &gw->jogador );
            atualizarJogador( &gw->jogador, delta );

            /* bolinha principal */
            atualizarBolinha( &gw->bolinha, delta );
            resolverColisaoBolinhaJogador( &gw->bolinha, &gw->jogador );
            resolverColisaoBolinhaAlvos( gw, &gw->bolinha );

            /* bolinhas extras (liberadas pelo alvo especial) */
            for ( int i = 0; i < MAX_BOLINHAS_EXTRAS; i++ ) {
                if ( gw->bolinhasExtras[i].ativa ) {
                    atualizarBolinha( &gw->bolinhasExtras[i], delta );
                    resolverColisaoBolinhaJogador( &gw->bolinhasExtras[i], &gw->jogador );
                    resolverColisaoBolinhaAlvos( gw, &gw->bolinhasExtras[i] );

                    /* saiu por baixo -> so desativa, nao tira vida */
                    if ( gw->bolinhasExtras[i].centro.y - gw->bolinhasExtras[i].raio >= GetScreenHeight() ) {
                        gw->bolinhasExtras[i].ativa = false;
                    }
                }
            }

            /* bolinha principal saiu pela borda inferior -> perde vida */
            if ( gw->bolinha.centro.y - gw->bolinha.raio >= GetScreenHeight() ) {
                gw->vidas--;
                if ( gw->vidas <= 0 ) {
                    gw->estado = GAME_OVER;
                } else {
                    resetarBolinhaEJogador( gw );
                    desativarBolinhasExtras( gw );
                    gw->estado = PAUSADO;
                }
            }
           if (gw->pontuacao >= 1000) {

            int novoNivel = (gw->pontuacao - 1000) / 300 + 1;

            if (novoNivel > gw->nivelDificuldade) {

            gw->nivelDificuldade = novoNivel;
            gw->jogador.ret.width -= 15;

            if (gw->jogador.ret.width < 75) {
                gw->jogador.ret.width = 75;
            }

            gw->jogador.velocidadeBase += 40.0f;

            gw->bolinha.vel.x *= 1.10f;
            gw->bolinha.vel.y *= 1.10f;
            }
        }
            if ( contarAlvosVivos( gw ) == 0 ) {
                gw->estado = VITORIA;
            }
            break;

        /* VITORIA / GAME_OVER */
        case VITORIA:
        case GAME_OVER:
            if ( IsKeyPressed( KEY_R ) ) {
                reiniciarJogo( gw );
            }
            break;
    }
}


void drawGameWorld( GameWorld *gw ) {

    BeginDrawing();
    ClearBackground( BLACK );

    desenharJogador( &gw->jogador );
    desenharBolinha( &gw->bolinha );

    for ( int i = 0; i < MAX_BOLINHAS_EXTRAS; i++ ) {
        if ( gw->bolinhasExtras[i].ativa ) {
            desenharBolinha( &gw->bolinhasExtras[i] );
        }
    }

    desenharAlvos( gw->alvos, gw->lin * gw->col );

    /* Pontuacao */
    DrawText( TextFormat( "Pontos: %d", gw->pontuacao ), 10, 10, 22, WHITE );
    /*Nivel de dificuldade*/
    DrawText( TextFormat( "Nivel: %d", gw->nivelDificuldade ), 10, 38, 18, LIGHTGRAY );

    /* Vidas*/
    for ( int i = 0; i < gw->vidas; i++ ) {
        DrawCircle( GetScreenWidth() - 20 - i * 28, 21, 10, RED );
    }

    /* overlays por estado -- */
    switch ( gw->estado ) {

        /* Tela de pausa */
        case PAUSADO: {
            DrawRectangle( 0, 0, GetScreenWidth(), GetScreenHeight(),
                           (Color){ 0, 0, 0, 160 } );

            if ( gw->vidas == VIDAS_INICIAIS && gw->pontuacao == 0 ) {

                /* tela inicial: titulo com letras coloridas */
                const char *titulo    = " BREAKOUT ";
                int         fsTitulo  = 60;
                Color coresTitulo[]   = { RED, ORANGE, YELLOW, GREEN, RED, YELLOW,
                                          BLUE, PURPLE, WHITE,  ORANGE, BLUE };
                int xTitulo = GetScreenWidth() / 2 - MeasureText( titulo, fsTitulo ) / 2;
                int yTitulo = GetScreenHeight() / 2 - 90;
                for ( int k = 0; titulo[k] != '\0'; k++ ) {
                    char letra[2] = { titulo[k], '\0' };
                    DrawText( letra, xTitulo, yTitulo, fsTitulo, coresTitulo[k] );
                    xTitulo += MeasureText( letra, fsTitulo );
                }

                const char *instrucao = "Pressione ESPACO para comecar";
                int fsInstrucao = 20;
                DrawText( instrucao,
                          GetScreenWidth() / 2 - MeasureText( instrucao, fsInstrucao ) / 2,
                          GetScreenHeight() / 2 + 10, fsInstrucao, WHITE );

                const char *controles = "Setas esquerda/direita: mover o jogador";
                int fsControles = 16;
                DrawText( controles,
                          GetScreenWidth() / 2 - MeasureText( controles, fsControles ) / 2,
                          GetScreenHeight() / 2 + 48, fsControles, LIGHTGRAY );

            } else {
                /* pausa apos perder uma vida */
                const char *perdeu   = "VIDA PERDIDA!";
                int         fsPerdeu = 44;
                DrawText( perdeu,
                          GetScreenWidth() / 2 - MeasureText( perdeu, fsPerdeu ) / 2,
                          GetScreenHeight() / 2 - 60, fsPerdeu, ORANGE );

                const char *continuar   = "Pressione ESPACO para continuar";
                int         fsContinuar = 20;
                DrawText( continuar,
                          GetScreenWidth() / 2 - MeasureText( continuar, fsContinuar ) / 2,
                          GetScreenHeight() / 2 + 10, fsContinuar, WHITE );
            }
            break;
        }

        /* Tela de Game Over  */
        case GAME_OVER: {
            DrawRectangle( 0, 0, GetScreenWidth(), GetScreenHeight(),
                           (Color){ 0, 0, 0, 185 } );

            const char *over   = "GAME OVER";
            int         fsOver = 60;
            DrawText( over,
                      GetScreenWidth() / 2 - MeasureText( over, fsOver ) / 2,
                      GetScreenHeight() / 2 - 80, fsOver, RED );

            const char *placar   = TextFormat( "Pontuacao final: %d", gw->pontuacao );
            int         fsPlacar = 26;
            DrawText( placar,
                      GetScreenWidth() / 2 - MeasureText( placar, fsPlacar ) / 2,
                      GetScreenHeight() / 2 + 10, fsPlacar, WHITE );

            const char *reiniciar   = "Pressione R para jogar novamente";
            int         fsReiniciar = 18;
            DrawText( reiniciar,
                      GetScreenWidth() / 2 - MeasureText( reiniciar, fsReiniciar ) / 2,
                      GetScreenHeight() / 2 + 60, fsReiniciar, LIGHTGRAY );
            break;
        }

        /* Tela de Vitoria */
        case VITORIA: {
            DrawRectangle( 0, 0, GetScreenWidth(), GetScreenHeight(),
                           (Color){ 0, 0, 0, 155 } );

            const char *win   = "VOCE VENCEU!";
            int         fsWin = 55;
            DrawText( win,
                      GetScreenWidth() / 2 - MeasureText( win, fsWin ) / 2,
                      GetScreenHeight() / 2 - 80, fsWin, GOLD );

            const char *placar   = TextFormat( "Pontuacao final: %d", gw->pontuacao );
            int         fsPlacar = 26;
            DrawText( placar,
                      GetScreenWidth() / 2 - MeasureText( placar, fsPlacar ) / 2,
                      GetScreenHeight() / 2 + 10, fsPlacar, WHITE );

            const char *reiniciar   = "Pressione R para jogar novamente";
            int         fsReiniciar = 18;
            DrawText( reiniciar,
                      GetScreenWidth() / 2 - MeasureText( reiniciar, fsReiniciar ) / 2,
                      GetScreenHeight() / 2 + 60, fsReiniciar, LIGHTGRAY );
            break;
        }

        case JOGANDO:
            break;
    }

    EndDrawing();
}