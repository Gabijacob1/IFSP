# include <stdio.h>
# include <stdlib.h>
int main(void){
    int array[3][4];
    int arrayMult[3][4];
    int n1;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Multiplicar por: ");
    scanf("%d", &n1);

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            arrayMult[i][j] = array[i][j] * n1;
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("%03d ", arrayMult[i][j]);
        }
        printf("\n");
    }
    
return 0;

}