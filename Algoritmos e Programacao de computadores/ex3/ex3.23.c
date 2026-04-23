#include <stdio.h>
#include <stdlib.h>

int main (void){

    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    
    printf("N1: ");
    scanf("%d", &n1);
    printf("N2: ");
    scanf("%d", &n2);
    printf("N3: ");
    scanf("%d", &n3);
    printf("N4: ");
    scanf("%d", &n4);
    printf("N5: ");
    scanf("%d", &n5);

    if (n1 <= 0 || n2 <= 0 || n3 <= 0 || n4 <= 0 || n5 <= 0){
        printf("Forneca apenas numeros positivos.\n");
    } else {
        for (int i = 1; i <= 10; i++){
            for(int j = 1; j <= 7; j++){

                if (j == 1 || j == 2){
                    printf("*");
                } 
            }
                printf("\n");
        }

    }


    return 0;

}