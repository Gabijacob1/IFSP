# include <stdio.h>
# include <stdlib.h>
int main(void) {
    int altura, largura;
    printf("Digite a altura do retangulo: ");
    scanf("%d", &altura);
    printf("Digite a largura do retangulo: ");
    scanf("%d", &largura);

    printf("Perimetro = %d\n", 2 * (altura + largura));
    printf("Area = %d\n", altura * largura);
    return 0;
}
