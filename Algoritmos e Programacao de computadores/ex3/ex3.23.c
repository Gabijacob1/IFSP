#include <stdio.h>
#include <stdlib.h>

int main (void){

    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int max;
    
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
        max = n1;
        if (n2 > max) max = n2;
        if (n3 > max) max = n3;
        if (n4 > max) max = n4;
        if (n5 > max) max = n5;

        for (int i = max; i >= 1; i--){
            printf("%04d  ", i);
            if (n1 >= i) printf("*");
            else printf(" ");
            if (n2 >= i) printf("*");
            else printf(" ");
            if (n3 >= i) printf("*");
            else printf(" ");
            if (n4 >= i) printf("*");
            else printf(" ");
            if (n5 >= i) printf("*");
            else printf(" ");

            printf("\n");

           
        }

    }


    return 0;

}