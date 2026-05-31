# include <stdio.h>
# include <stdlib.h>
int main(void){
    int array[3][2];
    int array2[2][3];
    int arraymult[3][3];


    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("array2[%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            arraymult[i][j] = 0;
            for (int k = 0; k < 2; k++){
                arraymult[i][j] += array[i][k] * array2[k][j];
            }
        }
    }
    printf("A x B = \n");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%03d", arraymult[i][j]);
            if(j < 2){
                printf(" ");
            }
        }
        printf("\n");
    }




    return 0;

}