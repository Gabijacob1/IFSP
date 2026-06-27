#pragma once

#include "raylib/raylib.h"

typedef struct Alvo {
    Rectangle ret;
    Color cor;        
    int hp;           // hp (pontos de vida)
    bool especial;
} Alvo;

void desenharAlvo( Alvo *alvo );
void desenharAlvos( Alvo *alvos, int quantidade );