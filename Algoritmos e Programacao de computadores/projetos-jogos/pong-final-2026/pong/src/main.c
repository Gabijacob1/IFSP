/**
 * @file main.c
 * @author Prof. Dr. David Buzatto
 * @brief Main function and logic for the game. Simplified template for game
 * development in C using Raylib (https://www.raylib.com/).
 * 
 * @copyright Copyright (c) 2026
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*---------------------------------------------
 * Library headers.
 *-------------------------------------------*/
#include "raylib/raylib.h"
//#include "raylib/raymath.h"

/*---------------------------------------------
 * Project headers.
 *-------------------------------------------*/


/*---------------------------------------------
 * Macros. 
 *-------------------------------------------*/


/*--------------------------------------------
 * Constants. 
 *------------------------------------------*/


/*---------------------------------------------
 * Custom types (enums, structs, unions, etc.)
 *-------------------------------------------*/
typedef struct Jogador {

    Rectangle ret;
    float velocidade;
    Color cor;

    int teclaCima;
    int teclaBaixo;

    int pontuacao;

} Jogador;

typedef struct Bola {
    Vector2 centro;
    float raio;
    Vector2 vel;
    Color cor;
} Bola;

typedef enum EstadoJogo {
    INICIO,
    JOGANDO,
    AGUARDANDO
} EstadoJogo;

/*---------------------------------------------
 * Global variables.
 *-------------------------------------------*/
Jogador j1;
Jogador j2;
Bola bola;
EstadoJogo estado;
Jogador *ultimoPontuador;

/*---------------------------------------------
 * Function prototypes. 
 *-------------------------------------------*/

void inicializar( void );

/**
 * @brief Reads user input and updates the state of the game.
 */
void update( float delta );

/**
 * @brief Draws the state of the game.
 */
void draw( void );

void atualizarJogador( Jogador *j, float delta );
void desenharJogador( Jogador *j );

void atualizarBola( Bola *b, float delta );
void desenharBola( Bola *b );

void resolverColisaoBolaJogador( Bola *b, Jogador *j );
void resetarBola( Bola *b );
void resolverPontuacao( Bola *b, Jogador *j1, Jogador *j2 );

void desenharCenarioPlacar( Jogador *j1, Jogador *j2 );

/**
 * @brief Game entry point.
 */
int main( void ) {

    // local variables and initial user input

    // antialiasing
    SetConfigFlags( FLAG_MSAA_4X_HINT );

    // creates a new window 800 pixels wide and 450 pixels high
    InitWindow( 800, 450, "Pong" );

    // init audio device only if your game uses sounds
    //InitAudioDevice();

    // FPS: frames per second
    SetTargetFPS( 60 );    

    // you must load game resources here
    inicializar();

    // game loop
    while ( !WindowShouldClose() ) {
        update( GetFrameTime() );
        draw();
    }

    // you should unload game resources here

    
    // close audio device only if your game uses sounds
    //CloseAudioDevice();
    CloseWindow();

    return 0;

}

void inicializar( void ) {

    j1.ret.x = 25;
    j1.ret.width = 25;
    j1.ret.height = 100;
    j1.ret.y = GetScreenHeight() / 2 - j1.ret.height / 2;
    j1.velocidade = 200;
    j1.cor = WHITE;
    j1.teclaCima = KEY_W;
    j1.teclaBaixo = KEY_S;
    j1.pontuacao = 0;

    j2 = j1;
    j2.ret.x = GetScreenWidth() - j2.ret.width - 25;
    j2.teclaCima = KEY_UP;
    j2.teclaBaixo = KEY_DOWN;

    bola.centro = (Vector2) {
        .x = GetScreenWidth() / 2,
        .y = GetScreenHeight() / 2
    };
    bola.raio = 15;
    bola.vel = (Vector2) { 0 };
    bola.cor = WHITE;

    // alternativamente:
    /*bola = (Bola) {
        .centro = {
            .x = GetScreenWidth() / 2,
            .y = GetScreenHeight() / 2
        },
        .raio = 15,
        .vel = (Vector2) { 200, 200 },
        .cor = WHITE
    };*/

    estado = INICIO;
    ultimoPontuador = NULL;

}

void update( float delta ) {

    if ( estado == INICIO ) {
        if ( IsKeyPressed( KEY_SPACE ) ) {
            estado = JOGANDO;
            bola.vel.x = GetRandomValue( 0, 1 ) == 0 ? 200 : -200;
            bola.vel.y = GetRandomValue( 0, 1 ) == 0 ? 200 : -200;
        }
    }

    if ( estado == AGUARDANDO ) {
        if ( IsKeyPressed( KEY_SPACE ) ) {
            estado = JOGANDO;
            bola.vel.x = ultimoPontuador == &j1 ? -200 : 200;
            bola.vel.y = GetRandomValue( 0, 1 ) == 0 ? 200 : -200;
        }
    }

    if ( estado == JOGANDO ) {
        atualizarJogador( &j1, delta );
        atualizarJogador( &j2, delta );
        atualizarBola( &bola, delta );
        resolverColisaoBolaJogador( &bola, &j1 );
        resolverColisaoBolaJogador( &bola, &j2 );
        resolverPontuacao( &bola, &j1, &j2 );
    }

}

void draw( void ) {

    BeginDrawing();
    ClearBackground( BLACK );
    desenharJogador( &j1 );
    desenharJogador( &j2 );
    desenharCenarioPlacar( &j1, &j2 );
    desenharBola( &bola );
    EndDrawing();

}

void atualizarJogador( Jogador *j, float delta ) {

    if ( IsKeyDown( j->teclaCima ) ) {
        j->ret.y -= j->velocidade * delta;
    }

    if ( IsKeyDown( j->teclaBaixo ) ) {
        j->ret.y += j->velocidade * delta;
    }

    if ( j->ret.y < 0 ) {
        j->ret.y = 0;
    }

    if ( j->ret.y + j->ret.height > GetScreenHeight() ) {
        j->ret.y = GetScreenHeight() - j->ret.height;
    }

}

void desenharJogador( Jogador *j ) {
    DrawRectangleRec( j->ret, j->cor );
}

void atualizarBola( Bola *b, float delta ) {

    b->centro.x += b->vel.x * delta;
    b->centro.y += b->vel.y * delta;

    if ( b->centro.y + b->raio >= GetScreenHeight() ) {
        b->centro.y = GetScreenHeight() - b->raio;
        b->vel.y = -b->vel.y;
    } else if ( b->centro.y - b->raio <= 0 ) {
        b->centro.y = b->raio;
        b->vel.y = -b->vel.y;
    }

}

void desenharBola( Bola *b ) {
    DrawCircleV( b->centro, b->raio, b->cor );
}

void resolverColisaoBolaJogador( Bola *b, Jogador *j ) {

    if ( CheckCollisionCircleRec( b->centro, b->raio, j->ret ) ) {
        if ( b->vel.x > 0 ) { // bateu no jogador 2 (vel.x positiva)
            b->centro.x = j->ret.x - b->raio;
        } else {              // bateu no jogador 1 (vel.x negativa)
            b->centro.x = j->ret.x + j->ret.width + b->raio;
        }
        b->vel.x = -b->vel.x;
    }

}

void resetarBola( Bola *b ) {
    b->vel = (Vector2) { 0 };
    b->centro.x = GetScreenWidth() / 2;
    b->centro.y = GetScreenHeight() / 2;
}

void resolverPontuacao( Bola *b, Jogador *j1, Jogador *j2 ) {

    if ( b->centro.x + b->raio >= GetScreenWidth() ) {
        resetarBola( &bola );
        ultimoPontuador = j1;
        j1->pontuacao++;
        estado = AGUARDANDO;
    } else if ( b->centro.x - b->raio <= 0 ) {
        resetarBola( &bola );
        ultimoPontuador = j2;
        j2->pontuacao++;
        estado = AGUARDANDO;
    }

}

void desenharCenarioPlacar( Jogador *j1, Jogador *j2 ) {

    int meio = GetScreenWidth() / 2;
    int margem = 20;
    int tamanhoFonte = 60;

    DrawLine( meio, 0, meio, GetScreenHeight(), WHITE );

    const char *textoP1 = TextFormat( "%d", j1->pontuacao );
    const char *textoP2 = TextFormat( "%d", j2->pontuacao );

    int larguraTextoP1 = MeasureText( textoP1, tamanhoFonte );

    DrawText( textoP1, meio - margem - larguraTextoP1, margem, tamanhoFonte, j1->cor );
    DrawText( textoP2, meio + margem, margem, tamanhoFonte, j2->cor );

}