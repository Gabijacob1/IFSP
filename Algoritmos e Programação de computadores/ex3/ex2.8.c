#include <stdio.h>
#include <stdlib.h>
int main(void) {
    float n1;
    float n2;
    float n3;
    printf("Digite um numero: \n"); 
    scanf("%f", &n1);
    printf("Digite outro numero: \n");
    scanf("%f", &n2);
    printf("Digite outro numero: \n");
    scanf("%f", &n3);

    if (n1 >= n2 && n1 >= n3 ){
        if(n2 >= n3){
            float soma = n1 + n2;
            printf("A soma dos dois numeros maiores fornecidos e %.2f\n", soma);
        }
        else{
            float soma = n1 + n3;
            printf("A soma dos dois numeros maiores fornecidos e %.2f\n", soma);
        }
    } else if (n2 >= n1 && n2 >= n3){
        if(n1 > n3){
            float soma = n2 + n1;
            printf("A soma dos dois numeros maiores fornecidos e %.2f\n", soma);
        }
        else{
            float soma = n2 + n3;
            printf("A soma dos dois numeros maiores fornecidos e %.2f\n", soma);
        }
    } else if (n3 >= n1 && n3 >= n2){
        if(n1 >= n2){
            float soma = n3 + n1;
            printf("A soma dos dois numeros maiores fornecidos e %.2f\n", soma);
        }
        else{
            float soma = n3 + n2;
            printf("A soma dos dois numeros maiores fornecidos e %.2f\n", soma);
        }
    }
    return 0;
}