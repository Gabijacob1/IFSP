#include <stdio.h>
#include <stdlib.h>

int main (void){
    int n1;
    int n2 = 1;
    int n3 = 1;    

    printf("Termo desejado: ");
    scanf("%d", &n1);
    
    for (int i = 1; i <= n1; i++){
        n3 = n2 + n3;
        n2 = n3 - n2;
        
    }
   
    printf("Fibonacci de %d e %d \n", n1, n2);


    return 0;
}