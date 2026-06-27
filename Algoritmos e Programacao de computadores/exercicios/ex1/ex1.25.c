#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float n1, n2;
    printf("Temperatura em graus Fahrenheit: ");
    scanf("%f", &n1);
    n2 = (n1 - 32) / 1.8;
    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius\n", n1, n2);
    return 0;
}