#include <stdio.h>
#include <stdlib.h>
int main(void){
    int array[3][3];
    int arraymult[3][3];
    int arraytrans[3][3];
    int D;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){

            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    D = (
            (array[0][0] * array[1][1] * array[2][2]) +
            (array[0][1] * array[1][2] * array[2][0]) +
            (array[0][2] * array[1][0] * array[2][1])
        ) - (
            (array[0][2] * array[1][1] * array[2][0]) +
            (array[0][0] * array[1][2] * array[2][1]) +
            (array[0][1] * array[1][0] * array[2][2])
        );
        
    printf("Determinante: %d\n", D);

    return 0;
}
