# include <stdio.h>
# include <stdlib.h>

int main() {
    int n1;
    int n2;
    int array[10];

    do {
         printf("Quantidade de elementos (1 a 9): ");
         scanf("%d", &n1);
         if (n1 < 1 || n1 > 9) {
             printf("Quantidade incorreta, forneca novamente!\n");
         }
    } while (n1 < 1 || n1 > 9);

    for (int i = 0; i < n1; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    printf("Valor que sera inserido: ");
    scanf("%d", &n2);

    for(int i = n1; i > 0; i--){
        array[i] = array[i-1];
    }

    array[0] = n2;

    for (int i = 0; i < n1 + 1; i++){
        printf("array[%d]: %d\n", i, array[i]);
    }

    return 0;
}