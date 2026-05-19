#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int areaCirculo(float raio);


int circunferenciaCirculo(float raio);

int main(void){
    float raio;

    printf("Raio: ");
    scanf("%f", &raio);

    printf("Area = %f\n", areaCirculo(raio));
    printf("Circunferencia = %f\n", circunferenciaCirculo(raio));
    return 0;
}

int areaCirculo(float raio){
    return M_PI * raio * raio;
}

int circunferenciaCirculo(float raio){
    return 2 * M_PI * raio;
}
