#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n1;
    printf("Forneca um numero maior ou igual a zero: ");
    scanf("%d", &n1);

    for (int i = 0; i <= n1; i++){
       printf("%d ", i);
    }
    if (n1 < 0){
        printf("Valor incorreto (negativo)");
    }

    return 0;
}
