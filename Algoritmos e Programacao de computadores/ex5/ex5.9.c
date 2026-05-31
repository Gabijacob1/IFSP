#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n1;
    int valor;

    printf("Numero entre 1 e 100: ");
    scanf("%d", &n1);

    if (n1 < 1 || n1 > 100){
        printf("Numero incorreto!\n");
        return 0;
    }
    
    for (int i = 1; i <= n1; i++){
        for (int j = 1; j <= n1; j++){
            if (i >= j) {
                 valor = i - j + 1;
            } else {
                 valor = j - i + 1;
            }
            printf("%3d", valor);
            if(j < n1){
                printf(" ");
            }

        }

        printf("\n");
    }

    return 0;
}