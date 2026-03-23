# include <stdio.h>
# include <stdlib.h>
int main(void) {
    int n1, n2, n3, n4;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    n3 = n1;
    n4 = n2;
    printf("Valores antes da troca: \n");
    printf("Primeiro numero: %d \n", n1);
    printf("Segundo numero: %d \n", n2);
    printf("Valores depois da troca: \n");
    printf("Primeiro numero: %d \n", n4);
    printf("Segundo numero: %d \n", n3);

    return 0;
}