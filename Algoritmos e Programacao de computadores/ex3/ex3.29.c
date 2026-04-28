#include <stdio.h>

int main(void){
    float n1, n3;
    int n2;

    printf("Saldo inicial: ");
    scanf("%f", &n1);

    printf("Operacoes: \n");
    printf("1) Deposito; \n2) Saque; \n3) Fim.\n");

    do {
        printf("\nOperacao desejada: ");
        scanf("%d", &n2);

        if(n2 == 1){
            printf("Valor a depositar: ");
            scanf("%f", &n3);
            n1 += n3;
        }
        else if(n2 == 2){
            printf("Valor a sacar: ");
            scanf("%f", &n3);
            n1 -= n3;
        }
        else if(n2 != 3){
            printf("Operacao invalida.\n");
        }

    } while(n2 != 3);

    printf("\nSaldo final: R$%.2f\n", n1);

    if(n1 > 0){
        printf("Conta preferencial.\n");
    }
    else if(n1 < 0){
        printf("Conta devedora.\n");
    }
    else{
        printf("Sem saldo.\n");
    }

    return 0;
}