#include <stdio.h>
#include <stdlib.h>

int main (void){
    for (int i = 1; i <= 10; i++){
            for(int j = 1; j <= 9; j++){

                if (j == 1 || j == 2 || j + i == 10 || j + i == 8 ){
                    printf("*");
                } 
            }
                printf("\n");
        }

        return 0;
}