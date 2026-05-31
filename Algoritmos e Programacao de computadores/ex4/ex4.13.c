# include <stdio.h>
# include <stdlib.h>

int main(void) {
    int array[10];
    int n1;

    for (int i = 0; i < 10; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    do {
            printf("Quantidade de elementos (1 a 9): ");
            scanf("%d", &n1);
            if (n1 < 1 || n1 > 9) {
                printf("Quantidade incorreta, forneca novamente!\n");
            }
    }while(n1 < 1 || n1 > 9);

    for(int i = n1; i < 10; i++){
        array[i] = array[i+1];
    }

    printf("\n");

    for (int i = 0; i < 9; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }



    return 0;
}