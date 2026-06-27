#include <stdio.h>
#include <stdlib.h>
int main(void) {
    float n1;
    int n2 = 0;
    int n3 = 1;
    float media = 0;
    float soma = 0;
    float maior = 0;
    int quant = 0;


    do{
        printf("Entre com o peso da pessoa %02d: ", n3++);
        scanf("%f", &n1);

        if (n1 > -1){
            quant++;
            if (n1 >= 60){
                soma += n1;
                n2++;
            }
            if (n1 > maior){
                    maior = n1;
                }
        }
    }
    while(n1 > -1);
    if (n2 > 0){
        media = soma/n2;
    } else {
        media = 0;
    }
    if (quant == 0){
        maior = 0;
    }
    printf("Media dos pesos acima de 60kg: %.2f\n", media);
    printf("A pessoa mais pesada possui %.2fkg\n", maior);

    return 0;
}