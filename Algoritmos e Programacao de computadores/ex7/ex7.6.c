#include <stdio.h>
#include <stdlib.h>

int somaDivisores(int n);

int lePositivo(void);

int main(void){
    int n1[5];
    int n2[5];

    for(int i = 0; i < 5; i++){
        printf("n[%d]: ", i);

        n1[i] = lePositivo();
        n2[i] = somaDivisores(n1[i]);

    }

    for(int i = 0; i < 5; i++){

        printf("Soma dos divisores de %d: %d\n", n1[i], n2[i]);
    }

    return 0;
}

int lePositivo(void){
    int n;
    scanf("%d", &n);

     while (n <= 0) {
        printf("Entre com um valor positivo: ");
        scanf("%d", &n);
    }
    return n;
}

int somaDivisores(int n){
    int soma = 0;

    for(int i = n/2; i > 0; i--){
        if (n % i == 0){
            soma += i;
        }
    }
    return soma;
}
