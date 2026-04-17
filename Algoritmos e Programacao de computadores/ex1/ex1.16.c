# include <stdio.h>
# include <stdlib.h>
int main(void) {
    float altura, largura;
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);
    printf("Digite a base do triangulo: ");
    scanf("%f", &largura);
    printf("Area = %.2f\n", (altura * largura) / 2);
    return 0;
}
