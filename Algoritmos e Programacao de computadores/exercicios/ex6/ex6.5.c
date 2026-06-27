#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
    float numero;
    
    printf("Numero: ");
    scanf("%f", &numero);
    
    if (numero >= 0) {
        float raiz = sqrt(numero);
        printf("Raiz quadrada de %.2f: %.2f\n", numero, raiz);
    } else {
        float quadrado = numero * numero;
        printf("Quadrado de %.2f: %.2f\n", numero, quadrado);
    }
    
    return 0;
}
