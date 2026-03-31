#include <stdio.h>
#include <stdlib.h>
int main(void) {
    float n1, n2, n3, n4, n5, n6;
    printf("Digite os lados de um triangulo: \n");
    
    printf("a: ");
    scanf("%f", &n1);

    if (n1 < 0){
        n1 = -n1;
    }

    printf("b: ");
    scanf("%f", &n2);

    if (n2 < 0){
        n2 = -n2;
    }

    printf("c: ");
    scanf("%f", &n3);

    if (n3 < 0){
        n3 = -n3;
    }

    if((n1 - n2) < n3 && n3 < (n1 + n2)){
        if ((n1 - n3) < n2 && n2 < (n1 + n3)){
            if ((n2 - n3) < n1 && n1 < (n2 + n3)){
                
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
                if (n1 != n2 && n1 != n3 && n2 != n3){
                    printf("Triangulo ESCALENO");
                }
            }
        }
    } else { 
        printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
    } 


    return 0;
}




