# include <stdio.h>
# include <stdlib.h>
int main(void) {
 int n1, n2, media;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("\n Digite o primeiro numero: ");
    scanf("%d", &n2);
    media = (n1+n2)/2;
    printf("\n Media aritmetica: %d \n", media);
    return 0;
}