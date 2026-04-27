#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n1;
    int maior = 0;
    int menor = 0;
    int primeiro = 1;

    do{
        printf("Entre com um valor: ");
        scanf("%d", &n1);

        if (n1 > -1){
            if (primeiro){
                maior = n1;
                menor = n1;
                primeiro = 0;
            }
            else{
                if (n1 > maior){
                    maior = n1;
                }
                if (n1 < menor){
                    menor = n1;
                }

            } 
        }
    }
    while(n1 > -1);
    
    printf("Menor numero: %d\n", menor);
    printf("Maior numero: %d\n", maior);    
    
    return 0;
}