# include <stdio.h>
# include <stdlib.h>
int main(void) {
    int n1,n2;
    printf("Digite um numeros: ");
    scanf("%d", &n1);
    printf("Digite outro numeros: ");
    scanf("%d", &n2);
    printf("%d + %d = %d\n", n1, n2, n1 + n2);
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
    printf("%d * %d = %d\n", n1, n2, n1 * n2);
    printf("%d / %d = %d\n", n1, n2, n1 / n2);

    return 0;
}