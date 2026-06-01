#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M_PI 3.14159265358979323846


double areaCirculo(float raio);


double circunferenciaCirculo(float raio);

int main(void){
    float raio;

    printf("Raio: ");
    scanf("%f", &raio);

    printf("Area = %.2f\n", areaCirculo(raio));
    printf("Circunferencia = %.2f\n", circunferenciaCirculo(raio));
    return 0;
}

double areaCirculo(float raio){
    return M_PI * raio * raio;
}

double circunferenciaCirculo(float raio){
    return 2 * M_PI * raio;
}
