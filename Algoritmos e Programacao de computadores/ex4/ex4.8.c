#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5];
    int q = 0;
    int n1[5];
    int t = 0;
    int n2[5];

    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            n1[q] = array[i];
            q++;
        }else {
            n2[t] = array[i];
            t++;
        }
    }
    
    printf("Numeros pares: ");

    if (q > 0) {
        for (int i = 0; i < q; i++) {
            printf("%d ", n1[i]);
        }
        printf("\n");
    } else {
        printf("nao ha.\n");
    }

    printf("Numeros impares: ");
    
    if (t > 0) {
        for (int i = 0; i < t; i++) {
            printf("%d ", n2[i]);
        }
        printf("\n");
    } else {
        printf("nao ha.\n");
    }



    return 0;
}