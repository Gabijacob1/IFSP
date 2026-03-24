# include <stdio.h>
# include <stdlib.h>
int main(void) {
    int n1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    if (n1 % 2 == 0){
        printf("O numero %d e par.\n", n1);
    }
    else{
        printf("O numero %d e impar.\n", n1);
    }

    return 0;
}