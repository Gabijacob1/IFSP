#include <stdio.h>
#include <stdlib.h>
void decompoeTempo( int totalSeg, int *horas, int *minutos, int *seg){
    *horas = totalSeg / 3600;
    *minutos = (totalSeg % 3600) / 60;
    *seg = (totalSeg % 60);
}



