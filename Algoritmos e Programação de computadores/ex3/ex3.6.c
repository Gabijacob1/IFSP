#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    if (n1 >= 0){
        for (int i = n1; i >= 0; i--){
        printf("%d ", i);
        }
    } else { 
            printf("Valor incorreto (negativo)");
        }

    return 0;
}
