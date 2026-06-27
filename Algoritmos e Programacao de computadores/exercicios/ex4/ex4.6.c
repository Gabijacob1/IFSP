#include <stdio.h>
#include <stdlib.h>
int main() {
    int array[5];
    int n1;
    int q = 0;
    int result[q];

    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Buscar por: \n");
    scanf("%d", &n1);

    for (int i = 0; i < 5; i++) {
        if(n1 == array[i]) {
            result[q] = i;
            q++;
        }
    }
    if( q == 0) {
        printf("O array nao contem o valor %d.\n", n1);
    } else if (q == 1) {
        printf("O valor %d foi encontrado no indice %d do array.\n",n1, result[0]);
    } else {
        printf("O valor %d foi encontrado nos indices ", n1);
        for (int i = 0; i < q; i++) {
            if (i == 0) {
                printf("%d", result[i]);
            } else if (i == q - 1) {
                printf(" e %d", result[i]);
            } else {
                printf(", %d", result[i]);
            }
        }
        printf(" do array.\n");
    }

    return 0;
}