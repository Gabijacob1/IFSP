#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n1;
    int n2;
    printf("Tabuada do Numero: ");
    scanf("%d", &n1);
    for (int i = 0; i <= 10; i++){
        n2 = n1 * i;
        printf("%d x %d = %d\n", n1, i, n2);
    }

    return 0;
}