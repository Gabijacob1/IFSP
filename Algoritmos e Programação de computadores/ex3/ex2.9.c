#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n1;
    float n2;

    printf("Entre com a quantidade de lados: \n");
    scanf("%d", &n1);
    printf("Entre com a medida do lado: \n");
    scanf("%f", &n2);

    if (n1 == 3){
        float n3 = n2*3;
        printf("TRIANGULO de perimetro %.2f", n3);
    }
    else if (n1 == 4){
        float n4 = n2*n2;
        printf("QUADRADO de area %.2f", n4);
    }
    else if (n1 == 5){
       printf("PENTAGONO");
    } else {
        printf("Poligono nao identificado");
    }

    return 0;
}