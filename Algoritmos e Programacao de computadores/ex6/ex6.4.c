#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    float numero;
    
    printf("Numero: ");
    scanf("%f", &numero);
    
    float valor_absoluto = fabs(numero);
    
    printf("Valor absoluto: %.2f\n", valor_absoluto);
    
    return 0;
}