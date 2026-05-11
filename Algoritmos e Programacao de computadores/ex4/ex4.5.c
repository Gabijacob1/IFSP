#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5];
    int n1;
    int count = 0;

    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    printf("Buscar por: ");
    scanf("%d", &n1);
    for (int i = 0; i < 5; i++) {
        if(n1 == array[i]) {
            count++;
        }
    }
    if (count > 1) {
        printf("O array contem %d ocorrencias do valor %d.\n", count, n1);
    }  else if (count == 1) {
        printf("O array contem %d ocorrencia do valor %d.\n", count, n1);
    } else {
        printf("O array nao contem o valor %d.\n", n1);
    }

    return 0;
}