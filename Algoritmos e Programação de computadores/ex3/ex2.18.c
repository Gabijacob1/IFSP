# include <stdio.h>
# include <stdlib.h>

int main(void) {
    float n1;
    float n2;
    char n3;

    printf("N1: ");
    scanf("%f", &n1);

    printf("N2: ");
    scanf("%f", &n2);

    printf("Escolha uma operacao de acordo com o menu: \n");
    printf("     +) Soma\n");
    printf("     -) Subtracao\n");
    printf("     *) Multiplicacao\n");
    printf("     /) Divisao\n");
    printf("Operacao: ");
    scanf(" %c", &n3);

    switch (n3) {
    case '+':
        printf("%.2f + %.2f = %.2f\n", n1, n2, n1+n2);
        break;
    
    case '-':
        printf("%.2f - %.2f = %.2f\n", n1, n2, n1-n2);
        break;

    case '*':
        printf("%.2f * %.2f = %.2f\n", n1, n2, n1*n2);
        break;

    case '/':
        printf("%.2f / %.2f = %.2f\n", n1, n2, n1/n2);
        break;

    default:
        printf("Opcao invalida!\n");
        break;
    }

    return 0;
}