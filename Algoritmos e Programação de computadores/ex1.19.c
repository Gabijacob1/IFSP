# include <stdio.h>
# include <stdlib.h>
int main(void) {
 float raio,pi = 3.141592;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    printf("Diametro = %.2f\n", 2 * raio);
    printf("circunferencia = %.2f\n", 2 * pi * raio);
    printf("Area = %.2f\n", pi * raio * raio);




    return 0;
}