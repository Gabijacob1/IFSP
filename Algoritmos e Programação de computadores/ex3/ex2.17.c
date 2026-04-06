#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n1;
    printf("Entre com um valor inteiro: ");
    scanf( "%d", &n1);

    switch (n1)
    { 
    case 2:
        printf("O valor fornecido foi 2.\n");
        break;

    case 4:
        printf("O valor fornecido foi 4.\n");
        break;

    case 6:
        printf("O valor fornecido foi 6.\n");
        break;

    case 8:
        printf("O valor fornecido foi 8.\n");
        break;
    
    default:
        printf("Valor invalido.\n");
        break;
    }
    

    return 0;
}