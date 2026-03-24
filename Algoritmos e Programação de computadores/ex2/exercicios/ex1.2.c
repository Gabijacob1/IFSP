#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <raylib.h>
int main( void ) {
   
    
    int x1, y1, x2, y2;
        printf( "Digite as coordenadas x inicial: " );
        scanf( "%d", &x1 );
        printf( "Digite as coordenadas y inicial: " );
        scanf( "%d", &y1 );
        printf( "Digite as coordenadas x final: " );
        scanf( "%d", &x2 );
        printf( "Digite as coordenadas y final: " );
        scanf( "%d", &y2 );
    
    SetConfigFlags( FLAG_MSAA_4X_HINT );
     
    InitWindow( 600, 400, "Exercício Criativo 1.2" );

    SetTargetFPS( 60 );    

    while ( !WindowShouldClose() ) {

        BeginDrawing();

        ClearBackground( BLACK );
       
        DrawLine( x1, y1, x2, y2, RED );


        EndDrawing();
    }
    // fecha a janela
    CloseWindow();
    return 0;

}
