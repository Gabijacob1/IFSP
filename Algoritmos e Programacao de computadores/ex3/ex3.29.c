#include <stdio.h>
#include <stdlib.h>

int main(void){
    float n1;
    float n3;
    int n2;

    printf("Saldo inicial: ");
    scanf("%f", &n1);

    printf("Operacoes: \n");
    printf("1) Deposito; \n2) Saque; \n3) Fim.\n");

    do{
        printf("\nOperacao desenada: ");
        scanf("%d", &n2);

        if (n2 == 1){
            printf("\nValor a depositar: ");
            scanf("%f", &n3);
            n1 += n3;
        }

        if (n2 == 2){
            printf("\nValor a sacar: ");
            scanf("%f", &n3);
            n1 -= n3;
        }

    } while(n2 != 3);

        if(n1 == 0 && n2 == 3){
            printf("Saldo final: %.2f\n", n1);
            printf("Sem Saldo.");
        }
    
        if(n1 <= -1){
            printf("Saldo final: %.2f\n", n1);
            printf("Conta devedora.");
        }

        if(n1 > 0){
            printf("Saldo final: %.2f\n", n1);
            printf("Conta preferencial.");
        }

        if(n2 != 1 && n2 != 2 && n2 != 3){
            printf("Saldo final: %.2f\n", n1);
            printf("Operacao invalida.");
        }

    return 0;
}