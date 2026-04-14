/**
 * @file main.c
 * @author Prof. Dr. David Buzatto
 * @brief Modelo para desenvolvimento de exercícios criativos usando a engine
 * de jogos Raylib (https://www.raylib.com/).
 * 
 * @copyright Copyright (c) 2025
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#include <raylib.h>

int main( void ) {

    /*-----------------------------------------------------
     * A lógica inicial do seu programa deve vir aqui:
     *     - declaração de variáveis;
     *     - entrada de dados;
     *     - processamentos adicionais.
     ----------------------------------------------------*/
  
    // ativa a suavização (antialiasing)
    SetConfigFlags( FLAG_MSAA_4X_HINT );

    // cria uma janela de 800 pixels de largura por 600 de altura
    InitWindow( 800, 600, "Olhinhos" );

    // configura a quantidade de quatros por segundo da engine
    SetTargetFPS( 60 ); 

    float raio = 100;   
    float distanciaEntre = 0;
    float xCentro = GetScreenWidth() / 2;
    float yCentro = GetScreenHeight() / 2;

    float xCentroO1 = xCentro - raio;
    float yCentroO1 = yCentro;

    float xCentroO2 = xCentro + raio;
    float yCentroO2 = yCentro;

    float distancia = raio / 2;
    float distanciaMouseO1 = 0;
    float distanciaMouseO2 = 0;

    float xCentroO1Iris = xCentroO1;
    float yCentroO1Iris = yCentroO1;

    float xCentroO2Iris = xCentroO2;
    float yCentroO2Iris = yCentroO2;

    float raioIris = 40;

    float anguloO1 = 0;
    float anguloO2 = 0;

    // enquanto não é sinalizado que a janela deve ser fechada
    while ( !WindowShouldClose() ) {

        // inicia o processo de desenho
        BeginDrawing();

        // limpa a tela usando uma cor
        ClearBackground( WHITE );

        /*----------------------------------------------------------------------
         * A lógica do seu desenho deve vir aqui.
         ---------------------------------------------------------------------*/
        
        float cat1O1 = GetMouseX() - xCentroO1;
        float cat201 = GetMouseY() - yCentroO1;
        distanciaMouseO1 = sqrt( cat1O1 * cat1O1 + cat201 * cat201 );

        float cat1O2 = GetMouseX() - xCentroO2;
        float cat2O2 = GetMouseY() - yCentroO2;
        distanciaMouseO2 = sqrt( cat1O2 * cat1O2 + cat2O2 * cat2O2 );

        if ( distanciaMouseO1 <= distancia ) {
            xCentroO1Iris = GetMouseX();
            yCentroO1Iris = GetMouseY();
        }else {
            anguloO1 = atan2( GetMouseY() - yCentroO1, GetMouseX() - xCentroO1);        
            xCentroO1Iris = xCentroO1 + distancia * cos( anguloO1 );
            yCentroO1Iris = yCentroO1 + distancia * sin( anguloO1 );
        }
        
        if ( distanciaMouseO2 <= distancia ) {
            xCentroO2Iris = GetMouseX();
            yCentroO2Iris = GetMouseY();
        }else {
            anguloO2 = atan2( GetMouseY() - yCentroO2, GetMouseX() - xCentroO2);        
            xCentroO2Iris = xCentroO2 + distancia * cos( anguloO2 );
            yCentroO2Iris = yCentroO2 + distancia * sin( anguloO2 );
        }

        /*Color cor = (Color){ 
            .r = 255,
            .g = 0,
            .b = 0,
            .a = 255
        };*/

        Color cor = ColorFromHSV( anguloO1 * RAD2DEG, 1, 1 );

        
        DrawCircleLines(xCentroO1, yCentroO1, raio, BLACK);
        DrawCircle( xCentroO1Iris, yCentroO1Iris, raioIris, cor);
        DrawCircle( xCentroO1Iris, yCentroO1Iris, raioIris / 3, BLACK);

        DrawCircleLines(xCentroO2, yCentroO2, raio, BLACK);
        DrawCircle( xCentroO2Iris, yCentroO2Iris, raioIris, cor);
        DrawCircle( xCentroO2Iris, yCentroO2Iris, raioIris / 3, BLACK);

        /*----------------------------------------------------------------------
         * A lógica do seu desenho deve terminar na linha acima.
         ---------------------------------------------------------------------*/

        // termina o desenho
        EndDrawing();

    }

    // fecha a janela
    CloseWindow();
    return 0;

}
