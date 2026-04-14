#include <stdio.h>
#include <stdlib.h>

int main (void){
    int n1;
    int n2 = 0;
    int n3;
    int n4 = 0;
    

    printf("Termo desejado: ");
    scanf("%d", &n1);

    for (int i = 0; i <= n1; i++){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    n4 == n1;
    
    printf("Fibonacci de %d e %d", n4, n3);


    return 0;
}