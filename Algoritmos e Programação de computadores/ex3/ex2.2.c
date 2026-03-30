# include <stdio.h>
# include <stdlib.h>
int main(void) {
    int n1, n2;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro: \n");
    scanf("%d", &n2);
    if (n1 < n2){
        printf("Ordem crescente: %d <= %d\n", n1, n2);
    }
    else{
        printf("Ordem crescente: %d <= %d\n", n2, n1);
    }
    return 0;
}