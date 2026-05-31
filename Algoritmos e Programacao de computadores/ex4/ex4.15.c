#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main() {
    int a1[5];
    int a2[5];
    int n1[5];
    int inter[5];
    int q = 0;

    printf("Forneca os valores do primeiro array:\n");
    for ( int i = 0; i < 5; i++) {
        printf("array1[%d]: ", i);
        scanf("%d", &a1[i]);
    }
    printf("Forneca os valores do segundo array:\n");
    for ( int i = 0; i < 5; i++) {
        printf("array2[%d]: ", i);
        scanf("%d", &a2[i]);
    }
    for ( int i = 0; i < 5; i++) {
        for ( int j = 0; j < 5; j++) {
            if (a1[i] == a2[j]) {
                bool achou = false;
                int valor = a1[i];
                for ( int k = 0; k < q; k++) {
                    if (valor == inter[k]) {
                        achou = true;
                        break;
                    }
                }
                if (!achou) {
                    inter[q] = valor;
                    q++;
                }
            }  
        }
    }
    
    if (q == 0) {
        printf("Nao ha interseccao entre os elementos dos dois arrays fornecidos!\n");
    } else {
        for (int i = 0; i < q; i++) {
            printf("arrayInterseccao[%d] = %d\n", i, inter[i]);
        }
    }
    return 0;
}