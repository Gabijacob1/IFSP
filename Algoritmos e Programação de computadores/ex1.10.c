# include <stdio.h>
# include <stdlib.h>
int main(void) {
    int altura, largura, largura2;
    printf("Digite a base maior do trapezio: ");
    scanf("%d", &altura);

    printf("Digite a base menor do trapezio: ");
    scanf("%d", &largura);

    printf("Digite a altura do trapezio: ");
    scanf("%d", &largura2);

    printf("Area = %d\n", ((altura + largura) * largura2) / 2);
    return 0;
}
