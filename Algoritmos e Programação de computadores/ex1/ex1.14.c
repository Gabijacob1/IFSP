# include <stdio.h>
# include <stdlib.h>
int main(void) {
    float n1;
    printf("Digite um numero: ");
    scanf("%f", &n1);

    printf("Perimetro = %.2f\n", n1 * 4);
    printf("Area = %.2f\n", n1 * n1);
    return 0;
}