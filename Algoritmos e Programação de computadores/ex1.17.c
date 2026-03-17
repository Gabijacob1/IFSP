# include <stdio.h>
# include <stdlib.h>
int main(void) {
    float altura, largura, largura2;
    printf("Digite a base maior do trapezio: ");
    scanf("%f", &altura);

    printf("Digite a base menor do trapezio: ");
    scanf("%f", &largura);

    printf("Digite a altura do trapezio: ");
    scanf("%f", &largura2);

    printf("Area = %.2f\n", ((altura + largura) * largura2) / 2);
    return 0;
}
