# include <stdio.h>
# include <stdlib.h>
int main(void) {
    int n1;
    int n2;
  
    printf("Numero: ");
    scanf("%d", &n1);

    if (n1 >= 0){
        for(int i = 1; i <= n1; i++){
            n2 = (n1 * i);
            n1 = i;
            i = n3;
        }
        printf("%d! = %d", n1, n2);

    } else {
        printf("Nao ha fatorial de numero negativo.");
    }

    return 0;
}
 n3 = n1 + n2;
        n1 = n2;
        n2 = n3;