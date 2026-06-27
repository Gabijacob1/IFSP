#include <stdio.h>
#include <stdlib.h>

int main (void){
    int idade;
    int menosd21=0;
    int maisd50=0;
    int pessoaAtual=1;

    do{
        printf("Idade da pessoa %02d: ", pessoaAtual++);
        scanf("%d", &idade);
    
    if (idade >-1 && idade < 21){
        menosd21++;
    } else if (idade >50){
        maisd50++;
    } 
}
while(idade >-1);
    printf("Total de pessoas menores de 21 anos: %d\n", menosd21);
    printf("Total de pessoas com mais de 50 anos: %d\n", maisd50);

    
return 0;
    
}