#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int hora;
    int minuto;
    int segundo;
} Hora;

Hora gerarHora(int quantidadeSegundos) {

    Hora h;

    h.hora = quantidadeSegundos / 3600;
    quantidadeSegundos %= 3600;

    h.minuto = quantidadeSegundos / 60;
    h.segundo = quantidadeSegundos % 60;

    return h;
}

void imprimirHora(const Hora *hora) {
    printf("%02d:%02d:%02d",
           hora->hora,
           hora->minuto,
           hora->segundo);
}

int main(void) {

    int segundos;
    Hora h;

    scanf("%d", &segundos);

    h = gerarHora(segundos);

    printf("Hora correspondente: ");
    imprimirHora(&h);
    printf("\n");

    return 0;
}