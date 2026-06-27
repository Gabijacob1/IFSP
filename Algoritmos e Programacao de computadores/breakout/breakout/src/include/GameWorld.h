/**
 * @file GameWorld.h
 * @author Prof. Dr. David Buzatto
 * @brief GameWorld struct and function declarations.
 * 
 * @copyright Copyright (c) 2026
 */
#pragma once

#include "Alvo.h"
#include "Bolinha.h"
#include "Jogador.h"
#define MAX_BOLINHAS_EXTRAS 3


/* Estados possiveis do jogo */
typedef enum EstadoJogo {
    PAUSADO,
    JOGANDO,
    VITORIA,
    GAME_OVER
} EstadoJogo;

typedef struct GameWorld {
    Jogador     jogador;
    Bolinha     bolinha;
    Bolinha     bolinhasExtras[MAX_BOLINHAS_EXTRAS];
    Alvo       *alvos;
    int         lin;
    int         col;
    int         nivelDificuldade;
    int         pontuacao;   /* pontuacao atual do jogador                  */
    int         vidas;       /* vidas restantes (começa com 3)              */
    EstadoJogo  estado;      /* estado atual da maquina de estados do jogo  */
} GameWorld;

/**
 * @brief Creates a dinamically allocated GameWorld struct instance.
 */
GameWorld *createGameWorld( void );

/**
 * @brief Destroys a GameWorld object and its dependecies.
 */
void destroyGameWorld( GameWorld *gw );

/**
 * @brief Reads user input and updates the state of the game.
 */
void updateGameWorld( GameWorld *gw, float delta );

/**
 * @brief Draws the state of the game.
 */
void drawGameWorld( GameWorld *gw );
