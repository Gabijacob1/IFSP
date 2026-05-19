#include <stdio.h>
#include <stdlib.h>

void somatoriaMedia(float a[], int n,float *somatorio, float *media);

int main(void){
    float numeros[10];
    float s;
    float m;

    //entrada
    somatoriaMedia(numeros, 10, &s, &m);
    //saida
    return 0;
}

void somatoriaMedia(float a[], int n,float *somatorio, float *media){
    *somatorio = 0;
    for(int i = 0; i < n; i++){
        *somatorio += a[i];
    }
    *media = *somatorio / n;
}