#include <stdlib.h>
#include <stdio.h>

void pInterno( const float *a1, const float *a2, float *pi, int n );

int main (void){
    float n1[5];
    float n2[5];
    float pi[5];
    
    for(int i = 0; i < 5; i++){
        printf("a1[%d]: ", i);
        scanf("%f", &n1[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("a2[%d]: ", i);
        scanf("%f", &n2[i]);
    }
    pInterno(n1, n2, pi, 5);


    for( int i = 0; i < 5; i++){
    printf("%.2f x %.2f = %.2f\n", n1[i], n2[i], pi[i]);
    }
    return 0;
}


void pInterno( const float *a1, const float *a2, float *pi, int n ){
    for (int i = 0; i < n; i++){
        pi[i] = a1[i] * a2[i];
    }
    
}
   



