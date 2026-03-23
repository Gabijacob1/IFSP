# include <stdio.h>
# include <stdlib.h>

int main(void) {
    float n1, n2, n3;
    printf("Entre com seu peso em quilogramas: ");
    scanf("%f", &n1);
    printf("Entre com sua altura em metros: ");
    scanf("%f", &n2);
    n3 = n1 / (n2 * n2);
    printf("Seu IMC e: %.2f\n", n3);

    return 0;
}