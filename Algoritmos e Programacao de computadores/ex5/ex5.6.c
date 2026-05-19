#include <stdio.h>
#include <stdlib.h>
int main(void){
    int array[2][3];
    int M[3][2];

    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            M[i][j] = array[j][i];
        }
    }
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            if(j == 0){
                printf("%03d ", M[i][j]);
            }     
        }
        for (int j = 0; j < 2; j++){
            if(j == 1){
                printf("%03d ", M[i][j]);
            }     
        }
        
        printf("\n");
    }


return 0;
}