# include <stdio.h>
# include <stdlib.h>

int main(void) {
    int array[10];
    int n1=0;

    for (int i = 0; i < 10; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 10; i++){
        if (array[i] % 2 != 0) {
            array[n1] = array[i];
            n1++;
        }
    }
    printf("\n");
    for (int i = 0; i < n1; i++){
        printf("array[%d]: %d\n", i, array[i]);
    }
    return 0;
}