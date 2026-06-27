#include <stdio.h>

int main() {
    int n1, n2 = 1;

    printf("Numero: ");
    scanf("%d", &n1);

    if (n1 < 0) {
        printf("Nao ha fatorial de numero negativo.\n");
    } else {
        for (int i = 1; i <= n1; i++) {
            n2 *= i;
        }
        printf("%d! = %d\n", n1, n2);
    }

    return 0;
}