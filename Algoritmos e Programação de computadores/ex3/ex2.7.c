#include <stdio.h>
#include <stdlib.h>
int main(void) {
    float n1, n2, n3, n4;
    printf("Digite um numero: \n");
    scanf("%f", &n1);
    printf("Digite outro numero: \n");
    scanf("%f", &n2);

    n3 = n1+n2;
    n4 = n1-n2;
    if (n3 > 10){
        printf("Os numeros fornecidos foram %.2f e %.2f\n", n1, n2);
    } else {
        printf("A subtracao entre %.2f e %.2f e igual a %.2f\n", n1, n2, n4);
    }

    return 0;
}