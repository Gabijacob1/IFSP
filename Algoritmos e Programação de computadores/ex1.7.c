# include <stdio.h>
# include <stdlib.h>
int main(void) {
    int n1;
    printf("Digite numeros: ");
    scanf("%d", &n1);
    printf("Perimetro= %d\n", n1 * 4);
    printf("Area= %d\n", n1 * n1);
    return 0;
}