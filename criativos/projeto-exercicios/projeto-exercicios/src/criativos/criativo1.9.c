/**
 * @file criativo1.9.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício Criativo 1.9.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "raylib/raylib.h"

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
    InitWindow( 800, 600, "Exercício Criativo 1.9" );

    // configura a quantidade de quatros por segundo da engine
    SetTargetFPS( 60 );    

    // enquanto não é sinalizado que a janela deve ser fechada
    while ( !WindowShouldClose() ) {

        // inicia o processo de desenho
        BeginDrawing();

        // limpa a tela usando uma cor
        ClearBackground( WHITE );

        /*----------------------------------------------------------------------
         * A lógica do seu desenho deve vir aqui.
         ---------------------------------------------------------------------*/



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
