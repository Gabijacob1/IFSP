#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool numeroCorreto(int n);
int obtemDigito(int n);
int obtemNumero(int n);
int calculaDigito(int n);


int main(void){
    int n1;

    printf("Numero: ");
    scanf("%d", &n1);

    if(n1 < 10 || n1 > 99999){
        return 0;
    } else {
        printf("Numero completo: %d\n", n1);
        printf("Numero: %d\n", obtemNumero(n1));
        printf("Digito: %d\n", obtemDigito(n1));
        printf("Digito calculado: %d\n", calculaDigito(obtemNumero(n1)));
        if ( numeroCorreto(n1) == true){
            printf("O numero fornecido esta correto!\n");
        } else{
            printf("O numero fornecido esta incorreto!\n");
        }
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

int obtemDigito(int n){
    n = n % 10;
    return n;
    
}

int obtemNumero(int n){
    n = n / 10;
    return n;
}

bool numeroCorreto(int n){
    int n1 = 0;
    int n2 = 0;

    n1 = obtemDigito(n);
    n2 = calculaDigito(obtemNumero(n));

    if (n1 == n2){
        return true;
    }
    else {return false;}
}
