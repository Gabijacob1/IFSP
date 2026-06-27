#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int somaDivisores(int n);

bool saoAmigos(int n1, int n2);

int main(void){
    int n1[5];
    int n2[5];

    for(int i = 0; i < 5; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &n1[i]);

        printf("n2[%d]: ", i);
        scanf("%d", &n2[i]);
    }
    for(int i = 0; i < 5; i++){
        if(saoAmigos(n1[i], n2[i])){
            printf("%d e %d sao amigos\n", n1[i], n2[i]);
        } else{
            printf("%d e %d nao sao amigos\n", n1[i], n2[i]);
        }
    }
    
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

bool saoAmigos(int n1, int n2){

        if(somaDivisores(n1) == n2 && somaDivisores(n2) == n1){
            return true;
        } else {
            return false;
        }
    
}


