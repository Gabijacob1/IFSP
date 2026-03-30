# include <stdio.h>
# include <stdlib.h>
int main(void) {
    float n1, n2;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    if (n1>=20){
        n2 = n1/2;
        printf("A metade de %.2f e %.2f\n", n1, n2);
    }
    else{
        n2 = n1*3;
        printf("O triplo de %.2f e %.2f\n", n1, n2);
    }
    

    return 0;
}