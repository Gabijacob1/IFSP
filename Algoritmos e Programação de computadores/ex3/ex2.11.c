#include <stdio.h>
#include<stdlib.h>
int main(void) {
    int n1, n2, n3;
    printf("Digite os angulos de um triangulo: \n");
    
    printf("alfa: ");
    scanf("%d", &n1);
    
    printf("beta: ");
    scanf("%d", &n2);
    
    printf("gama: ");
    scanf("%d", &n3);
    
    if (n1 + n2 + n3 == 180){
        if (n1 == 90 || n2 == 90 || n3 == 90){
            printf("Triangulo RETANGULO");
        }

         else if (n1 > 90 || n2 > 90 || n3 > 90){
            printf("Triangulo OBTUSANGULO");
        }

          else if (n1 < 90 || n2 < 90 || n3 < 90){
            printf("Triangulo ACUTANGULO");
        }
    } else {
        printf("As medidas fornecidas dos angulos nao representam um triangulo valido!");
    }

    return 0;

}