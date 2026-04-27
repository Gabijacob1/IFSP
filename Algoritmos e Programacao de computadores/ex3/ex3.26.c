#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int quant=0;
    float media=0;
    float soma=0;
    float n1=0;
    float n2=0;

    do{
        printf("Entre com um valor: ");
        scanf("%f", &n1);
        if (n1 > -1){
            soma += n1;
            quant++;
            
        }
    }
    while(n1 > -1);
    media = soma/quant;
    printf("Somatoria %.2f \n", soma);
    printf("Media %.2f \n", media);
    printf("Quantidade: %d \n", quant);

    return 0;
}