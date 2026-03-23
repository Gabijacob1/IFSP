# include <stdio.h>
# include <stdlib.h>
int main(void) {
    float n1, n2;
    printf("Digite a altura: ");
    scanf("%f", &n1);
    printf("Digite a largura: ");
    scanf("%f", &n2);
    printf("Perimetro = %.2f\n", (n1 + n2) * 2);
    printf("Area = %.2f\n", n1 * n2);
    return 0;
}