#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n1=4;
    for(int i=0; i<=1; i++){
        for(int j=1; j<=n1-1; j++){
            printf(" ");
        }
        for(int k=1; k<=i+1; k++){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}