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

    float xCentro = GetScreenWidth() / 2;
    float yCentro = GetScreenHeight() / 2;
    float raio = 100;   
    float distancia = raio / 2;
    float distanciaMouse = 0;

    float xCentroIris = xCentro;
    float yCentroIris = yCentro;
    float raioIris = 40;

    float angulo = 0;

    // enquanto não é sinalizado que a janela deve ser fechada
    while ( !WindowShouldClose() ) {

        // inicia o processo de desenho
        BeginDrawing();

        // limpa a tela usando uma cor
        ClearBackground( WHITE );

        /*----------------------------------------------------------------------
         * A lógica do seu desenho deve vir aqui.
         ---------------------------------------------------------------------*/
        float cat1 = GetMouseX() - xCentro;
        float cat2 = GetMouseY() - yCentro;
        distanciaMouse = sqrt( cat1 * cat1 + cat2 * cat2 );
        
        if ( distanciaMouse <= distancia ) {
            xCentroIris = GetMouseX();
            yCentroIris = GetMouseY();
        }else {
            angulo = atan2( GetMouseY() - yCentro, GetMouseX() - xCentro);        
            xCentroIris = xCentro + distancia * cos( angulo );
            yCentroIris = yCentro + distancia * sin( angulo );
        }
        
        DrawCircleLines(xCentro, yCentro, raio, BLACK);
        DrawCircle( xCentroIris, yCentroIris, raioIris, GREEN);
        DrawCircle( xCentroIris, yCentro, raioIris / 3, BLACK);

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
