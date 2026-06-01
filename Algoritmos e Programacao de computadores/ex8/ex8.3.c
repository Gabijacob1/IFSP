#include <stdio.h>
#include <stdlib.h>

void decompoeTempo( int totalSeg, int *horas, int *minutos, int *seg);

int main(void){
    int n1;
    int h;
    int m;
    int s;

    printf("Total de segundos: ");
    scanf("%d", &n1);
    
    printf("%d segundo(s) corresponde(m) a:\n", n1);
    
    decompoeTempo(n1, &h, &m, &s);

    printf("    %d hora(s)\n", h);
    printf("    %d minuto(s)\n", m);
    printf("    %d segundo(s)\n", s);
}

void decompoeTempo( int totalSeg, int *horas, int *minutos, int *seg){
    *horas = totalSeg / 3600;
    *minutos = (totalSeg % 3600) / 60;
    *seg = (totalSeg % 60);
}



