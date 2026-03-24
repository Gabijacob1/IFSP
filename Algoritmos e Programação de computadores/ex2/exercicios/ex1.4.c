#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <raylib.h>
int main( void ) {
  
    int posX, posY, width, height;

        printf( "x: " );
        scanf( "%d", &posX );
        printf( "y: " );
        scanf( "%d", &posY );
        printf( "largura: " );
        scanf( "%d", &width );
        printf( "altura: " );
        scanf( "%d", &height );
       

    InitWindow( 600, 400, "Exercício Criativo 1.4" );

    SetTargetFPS( 60 );    

    while ( !WindowShouldClose() ) {

        BeginDrawing();

        ClearBackground( BLACK );
       
       DrawRectangleLines( posX, posY, width, height, GREEN );


        EndDrawing();
    }
    // fecha a janela
    CloseWindow();
    return 0;

}
