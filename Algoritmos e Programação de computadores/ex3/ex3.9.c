#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    for (int i = 1; i <= n1; i++){
       printf("%d ", i);
    }

    return 0;
}