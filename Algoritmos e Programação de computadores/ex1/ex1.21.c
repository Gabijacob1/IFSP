# include <stdio.h>
# include <stdlib.h>
int main(void) {
 int n1, n2, antecessor, sucessor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    antecessor = n1 - 1;
    sucessor = n1 + 1;

    printf("Antecessor de %d: %d\n", n1, antecessor);
    printf("Sucessor de %d: %d\n", n1, sucessor);


    return 0;
}