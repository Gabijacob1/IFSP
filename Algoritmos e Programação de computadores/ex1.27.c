#include <stdio.h>
#include <stdlib.h>
int main(void) {
    float n1, n2, n3;
    int p1, p2, p3;
    float media;
    printf("Primeira nota: ");
    scanf("%f", &n1);
    printf("Peso da primeira nota: ");
    scanf("%d", &p1);
    printf("Segunda nota: ");
    scanf("%f", &n2);
    printf("Peso da segunda nota: ");
    scanf("%d", &p2);
    printf("Terceira nota: ");
    scanf("%f", &n3);
    printf("Peso da terceira nota: ");
    scanf("%d", &p3);
    media = ((n1*p1) + (n2*p2) + (n3*p3)) / (p1 + p2 + p3);
    printf("Media ponderada: %.2f\n", media);

    
    return 0;
}