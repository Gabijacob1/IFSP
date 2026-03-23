# include <stdio.h>
# include <stdlib.h>
int main(void) {
    int n1,n2;
    int adicao = n1 + n2;
    int subtracao = n1 - n2;
    int multiplicacao = n1 * n2;
    int divisao = n1 / n2;

    printf("Digite um numeros: ");
    scanf("%d", &n1);

    printf("Digite outro numeros: ");
    scanf("%d", &n2);
    
    printf("%d + %d = %d\n", n1, n2, adicao );
    printf("%d - %d = %d\n", n1, n2, subtracao);
    printf("%d * %d = %d\n", multiplicacao);
    printf("%d / %d = %d\n", divisao);

    return 0;
}