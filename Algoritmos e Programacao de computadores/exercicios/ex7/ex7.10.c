#include <stdio.h>
#include <stdlib.h>

int calculaDigito(int n);

int main(void){
    int n2;
    int n3;

    printf("Numero: ");
    scanf("%d", &n2);

    n3 = calculaDigito(n2);

    if( n2 < 1 || n2 > 9999){
        return 0;
    } else {
        printf("Digito verificador de %d: %d", n2, n3);
    }

}

int calculaDigito(int n){
    int digito; 
    int n2 = 2; 
    int soma = 0;
    int rest;
    
    while(n > 0){
        digito = n % 10;
        soma += digito * n2;
        n2++;
        n = n / 10;
    }

    rest = soma % 11;
    rest = 11 - rest;

    if( rest == 10 || rest == 11){
        return 0;
    } else{
        return rest;
    }

}

