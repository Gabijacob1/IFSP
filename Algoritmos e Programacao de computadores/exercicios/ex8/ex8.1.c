#include <stdio.h>
#include <stdlib.h>

void somatoriaMedia(float a[], int n,float *somatorio, float *media);

int main(void){
    float numeros[10];
    float s;
    float m;

    for(int i = 0; i < 10; i++){
        printf("n[%i]: ", i);
        scanf("%f", &numeros[i]);
    }

    somatoriaMedia(numeros, 10, &s, &m);
    
    printf("Somatorio: %.2f\n", s);
    printf("Media: %.2f\n", m);

    return 0;
}

void somatoriaMedia(float a[], int n,float *somatorio, float *media){
    *somatorio = 0;
    for(int i = 0; i < n; i++){
        *somatorio += a[i];
    }
    *media = *somatorio / n;
}