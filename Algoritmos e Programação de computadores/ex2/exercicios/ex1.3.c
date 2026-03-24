#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <raylib.h>
int main( void ) {
   
    
    int x1, y1, x2, y2, altura;
        printf( "Digite as coordenadas x inicial: " );
        scanf( "%d", &x1 );
        printf( "Digite as coordenadas y inicial: " );
        scanf( "%d", &y1 );
        printf( "Digite as coordenadas x final: " );
        scanf( "%d", &x2 );
        printf( "Digite as coordenadas y final: " );
        scanf( "%d", &y2 );
        printf( "Digite a altura: " );
        scanf( "%d", &altura );
        
        int xtopo = (x1 + x2) / 2;
        int ytopo = y1 - altura;

    InitWindow( 600, 400, "Exercício Criativo 1.3" );

    SetTargetFPS( 60 );    

    while ( !WindowShouldClose() ) {
        

        BeginDrawing();

        ClearBackground( BLACK );
       
        DrawLine( x1, y1, x2, y2, BLUE );
        DrawLine( x1, y1, xtopo, ytopo, YELLOW );
        DrawLine( x2, y2, xtopo, ytopo, RED );


        EndDrawing();
    }
    // fecha a janela
    CloseWindow();
    return 0;

}
