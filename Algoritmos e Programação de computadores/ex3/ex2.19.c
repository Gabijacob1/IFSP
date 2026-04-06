#include <stdio.h>
#include <stdlib.h>
int main(void) {
    float n1;
    float n2;
    char c1;

    printf("Escolha uma operacao de acordo com o menu: \n");
    printf("     C) Celsius -> Fahrenheit;\n");
    printf("     F) Fahrenheit -> Celsius;\n");
    printf("Operacao: ");
    scanf(" %c", &c1);

    switch (c1) {
    case 'C':
    case 'c':
    printf("Entre com a temperatura em graus Celsius: ");
    scanf("%f", &n1);
    
    n2 = ((1.8 * n1) + 32);

    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", n1, n2);
    break;

    case 'F':
    case 'f':
    printf("Entre com a temperatura em graus Fahrenheit: ");
    scanf("%f", &n1);

    n2 = (n1 - 32)/ 1.8;

    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", n1, n2);
    break;

    default:

    printf("Opcao invalida!");
    break;
    }


    return 0;

}