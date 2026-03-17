# include <stdio.h>
# include <stdlib.h>
int main(void) {
    int altura, largura;
    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);
    printf("Digite a base do triangulo: ");
    scanf("%d", &largura);
    printf("Area = %d\n", (altura * largura) / 2);
    return 0;
}
