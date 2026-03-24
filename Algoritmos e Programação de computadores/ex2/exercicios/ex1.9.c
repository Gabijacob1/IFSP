#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <raylib.h>
int main( void ) {
  
    int posX, posY;
    float raioH, raioV;

        printf( "x: " );
        scanf( "%d", &posX );
        printf( "y: " );
        scanf( "%d", &posY );
        printf( "raio horizontal: " );
        scanf( "%f", &raioH );
        printf( "raio vertical: " );
        scanf( "%f", &raioV );
       
    SetConfigFlags( FLAG_MSAA_4X_HINT );

    InitWindow( 600, 400, "Exercício Criativo 1.9" );

    SetTargetFPS( 60 );    

    while ( !WindowShouldClose() ) {

        BeginDrawing();

        ClearBackground( BLACK );
       
         DrawEllipse( posX, posY, raioH, raioV, WHITE );    

        EndDrawing();
    }
    // fecha a janela
    CloseWindow();
    return 0;

}
