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
#include <math.h>

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
#define MAX_BOLINHAS 2000

/*--------------------------------------------
 * Constants. 
 *------------------------------------------*/
const int GRAVIDADE = 2000;

/*---------------------------------------------
 * Custom types (enums, structs, unions, etc.)
 *-------------------------------------------*/
typedef struct Bola {
    float x;
    float y;
    float raio;
    float vx;
    float vy;
    float atrito;
    float elasticidade;
    bool arrastando;
    Color cor;
} Bola;

/*---------------------------------------------
 * Global variables.
 *-------------------------------------------*/
Bola bolinhas[MAX_BOLINHAS];
int quantidadeBolinhas = 0;

float xDif;
float yDif;

/*---------------------------------------------
 * Function prototypes. 
 *-------------------------------------------*/

void update( float delta );
void draw( void );

void criarBolinha( void );
void processarEntrada( void );
void atualizarBolinha( float delta );
void desenharBolinha( void );

/**
 * @brief Game entry point.
 */
int main( void ) {

    // local variables and initial user input


    // antialiasing
    SetConfigFlags( FLAG_MSAA_4X_HINT );

    // creates a new window 800 pixels wide and 450 pixels high
    InitWindow( 800, 450, "Bolinhas" );

    // init audio device only if your game uses sounds
    //InitAudioDevice();

    // FPS: frames per second
    SetTargetFPS( 60 );    

    // you must load game resources here

    criarBolinha();


    // game loop
    while ( !WindowShouldClose() ) {
        processarEntrada();
        update( GetFrameTime() );
        draw();
    }

    // you should unload game resources here

    
    // close audio device only if your game uses sounds
    //CloseAudioDevice();
    CloseWindow();

    return 0;

}

void update( float delta ) {
    atualizarBolinha( delta );
}

void draw( void ) {
    BeginDrawing();
    ClearBackground( WHITE );
    desenharBolinha();
    EndDrawing();
}

void criarBolinha( void ) {

    if ( quantidadeBolinhas < MAX_BOLINHAS ) {
        bolinhas[quantidadeBolinhas].x = GetScreenWidth() / 2;
        bolinhas[quantidadeBolinhas].y = GetScreenHeight() / 2;
        bolinhas[quantidadeBolinhas].raio = GetRandomValue( 30, 60 );
        bolinhas[quantidadeBolinhas].vx = GetRandomValue( -300, 300 );
        bolinhas[quantidadeBolinhas].vy = GetRandomValue( 100, 300 );
        bolinhas[quantidadeBolinhas].atrito = 0.99;
        bolinhas[quantidadeBolinhas].elasticidade = 0.9;
        bolinhas[quantidadeBolinhas].arrastando = false;
        bolinhas[quantidadeBolinhas].cor.r = GetRandomValue( 0, 255 );
        bolinhas[quantidadeBolinhas].cor.g = GetRandomValue( 0, 255 );
        bolinhas[quantidadeBolinhas].cor.b = GetRandomValue( 0, 255 );
        bolinhas[quantidadeBolinhas].cor.a = 255;
        quantidadeBolinhas++;
    }

}

void processarEntrada( void ) {

    if ( IsMouseButtonDown( MOUSE_BUTTON_RIGHT ) ) {
        criarBolinha();
    }

    if ( IsMouseButtonPressed( MOUSE_BUTTON_LEFT ) ) {

        for ( int i = quantidadeBolinhas - 1; i >= 0; i-- ) {

            float c1 = bolinhas[i].x - GetMouseX();    
            float c2 = bolinhas[i].y - GetMouseY();
            float dist = hypotf( c1, c2 );

            if ( dist <= bolinhas[i].raio ) {
                bolinhas[i].arrastando = true;
                xDif = GetMouseX() - bolinhas[i].x;
                yDif = GetMouseY() - bolinhas[i].y;
                break;
            }

        }

    }

    if ( IsMouseButtonReleased( MOUSE_BUTTON_LEFT ) ) {

        for ( int i = 0; i < quantidadeBolinhas; i++ ) {
            bolinhas[i].arrastando = false;
        }

    }

}

void atualizarBolinha( float delta ) {

    for ( int i = 0; i < quantidadeBolinhas; i++ ) {

        if ( !bolinhas[i].arrastando ) {

            bolinhas[i].x += bolinhas[i].vx * delta;
            bolinhas[i].y += bolinhas[i].vy * delta;

            if ( bolinhas[i].x + bolinhas[i].raio > GetScreenWidth() ) {
                bolinhas[i].x = GetScreenWidth() - bolinhas[i].raio;
                bolinhas[i].vx = -bolinhas[i].vx * bolinhas[i].elasticidade;
            } else if ( bolinhas[i].x - bolinhas[i].raio < 0 ) {
                bolinhas[i].x = bolinhas[i].raio;
                bolinhas[i].vx = -bolinhas[i].vx * bolinhas[i].elasticidade;
            }

            if ( bolinhas[i].y + bolinhas[i].raio > GetScreenHeight() ) {
                bolinhas[i].y = GetScreenHeight() - bolinhas[i].raio;
                bolinhas[i].vy = -bolinhas[i].vy * bolinhas[i].elasticidade;
            } else if ( bolinhas[i].y - bolinhas[i].raio < 0 ) {
                bolinhas[i].y = bolinhas[i].raio;
                bolinhas[i].vy = -bolinhas[i].vy * bolinhas[i].elasticidade;
            }

            bolinhas[i].vx = bolinhas[i].vx * bolinhas[i].atrito;
            bolinhas[i].vy = bolinhas[i].vy * bolinhas[i].atrito + GRAVIDADE * delta;

        } else {

            float xAnt = bolinhas[i].x;
            float yAnt = bolinhas[i].y;

            bolinhas[i].x = GetMouseX() - xDif;
            bolinhas[i].y = GetMouseY() - yDif;

            bolinhas[i].vx = ( bolinhas[i].x - xAnt ) / delta;
            bolinhas[i].vy = ( bolinhas[i].y - yAnt ) / delta;


        }

    }

}

void desenharBolinha( void ){
    for ( int i = 0; i < quantidadeBolinhas; i++ ) {
        DrawCircle( bolinhas[i].x, bolinhas[i].y, bolinhas[i].raio, bolinhas[i].cor );
    }
}