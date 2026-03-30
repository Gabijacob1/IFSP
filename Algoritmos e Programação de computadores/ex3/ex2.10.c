#include <stdio.h>
#include <stdlib.h>
int main(void) {
    float n1, n2, n3;
    printf("Digite os lados de um triangulo: \n");
    
    printf("a: ");
    scanf("%f", &n1);

    printf("b: ");
    scanf("%f", &n2);

    printf("c: ");
    scanf("%f", &n3);

    if (n1 == n2 && n2 == n3){
        printf("Triangulo EQUILATERO");
    } 

    if (n1 == n2 && n2 != n3){
         printf("Triangulo ISOSCELES");
    } 
    if (n2 == n3 && n1 != n2){
           printf("Triangulo ISOSCELES");
    }
    if (n3 == n1 && n2 != n1){
        printf("Triangulo ISOSCELES");
    }

    return 0;
}