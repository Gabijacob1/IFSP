#include <stdio.h>
#include <stdlib.h>
int main (void){
    float n1 = 0;
    float n2;
    float n3 = 0;
    float media;
    printf("Forneca a nota de 10 alunos: \n");
    for(int i = 1; i <= 10; i++){
        printf("Nota %02d: ", i);
        scanf("%f", &n2);
        n1 = (n2 + n3);
        n2 = n3;
        n3 = n1;
    }
    media = n1/10;
    printf("A media aritmetrica das dez notas e: %.2f", media);
    return 0;
}