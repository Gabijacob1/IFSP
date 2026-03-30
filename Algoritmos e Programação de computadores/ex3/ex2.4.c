# include <stdio.h>
# include <stdlib.h>
int main(void) {
    int n1, n2, n3;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &n2);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &n3);
    if (n1 <= n2 && n1 < n3){
        if(n2 < n3){
            printf("%d <= %d <= %d\n", n1, n2, n3);
        }
        else{
            printf("%d <= %d <= %d\n", n1, n3, n2);
        }
    }
    if (n2 < n1 && n2 <= n3){
        if(n1 < n3){
            printf("%d <= %d <= %d\n", n2, n1, n3);
        }
        else{
            printf("%d <= %d <= %d\n", n2, n3, n1);
        }
    }
    if (n3 <= n1 && n3 < n2){
        if(n1 < n2){
            printf("%d <= %d <= %d\n", n3, n1, n2);
        }
        else{
            printf("%d <= %d <= %d\n", n3, n2, n1);
        }
    } else{
        printf("%d <= %d <= %d\n", n1, n2, n3);
    }
    
    return 0;
}