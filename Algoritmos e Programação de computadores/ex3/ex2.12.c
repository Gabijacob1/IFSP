#include <stdio.h>
#include <stdlib.h>
int main(void){
    int h1, h2, m1, m2;

    printf("Idade Homem: ");
    scanf("%d", &h1);

    printf("Idade Homem: ");
    scanf("%d", &h2);

    printf("Idade Mulher: ");
    scanf("%d", &m1);

    printf("Idade Mulher: ");
    scanf("%d", &m2);

    if (h1 > h2){
        if (m1 < m2){
            printf("Idade homem mais velho + idade mulher mais nova: %d\n", h1 + m1);
        }
        else{
            printf("Idade homem mais velho + idade mulher mais nova: %d\n", h1 + m2);
        }
        if (m1 > m2){
            printf("Idade homem mais novo * idade mulher mais velha: %d\n", h2 * m1);
        }
        else{
            printf("Idade homem mais novo * idade mulher mais velha: %d\n", h2 * m2);
        }
    }
    if (h1 < h2){
        if (m1 < m2){
            printf("Idade homem mais velho + idade mulher mais nova: %d\n", h2 + m1);
        }
        else{
            printf("Idade homem mais velho + idade mulher mais nova: %d\n", h2 + m2);
        }
        if (m1 > m2){
            printf("Idade homem mais novo * idade mulher mais velha: %d\n", h1 * m1);
        }
        else{
            printf("Idade homem mais novo * idade mulher mais velha: %d\n", h1 * m2);
        }
    }





    return 0;
}