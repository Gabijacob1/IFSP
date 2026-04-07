#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <raylib.h>
int main( void ) {
  
    int posX, posY, raio;

        printf( "x: " );
        scanf( "%d", &posX );
        printf( "y: " );
        scanf( "%d", &posY );
        printf( "raio: " );
        scanf( "%d", &raio );
       
    SetConfigFlags( FLAG_MSAA_4X_HINT );

    InitWindow( 600, 400, "Exercício Criativo 1.6");

    SetTargetFPS( 60 );    

    while ( !WindowShouldClose() ) {

        BeginDrawing();

        ClearBackground( BLACK );
       
         DrawCircleLines( posX, posY, raio, PURPLE );    

        EndDrawing();
    }
    // fecha a janela
    CloseWindow();
    return 0;

}
