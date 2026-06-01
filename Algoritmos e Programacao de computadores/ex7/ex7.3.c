#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float maiorNumero(float a, float b);

int main(void){
    float n1[5];
    float n2[5];
    float maior[5];


        for(int i = 0; i < 5; i++){
            do{
                printf("n1[%d]: ", i);
                scanf(" %f", &n1[i]);


                if (n1[i] < 0){
                    printf("Entre com um valor positivo!\n");
                } 
            
            } while (n1[i] < 0);
                
            do{
                printf("n2[%d]: ", i); 
                scanf(" %f", &n2[i]);

                if (n2[i] < 0){
                    printf("Entre com um valor positivo!\n");
                }                

            } while ( n2[i] < 0);
        }
        for (int i = 0; i < 5; i++){
            if(n1[i] == n2[i]){
                printf("%.2f, %.2f: Eles sao iguais\n", n1[i], n2[i]);
            } else{ 
                printf("%.2f, %.2f: O maior valor e %.2f\n", n1[i], n2[i], maiorNumero(n1[i], n2[i]));
            }
        }
     
    return 0;

}



float maiorNumero(float a, float b){
    return fmax(a, b);
}
