#include <stdio.h>

int lePositivo(void);

int somatorio(int n);

int main(void) {
    int num[5];
    int resultado[5];
    for (int i = 0; i < 5; i++) {
        printf("num[%d]: ", i);
        num[i] = lePositivo();
        resultado[i] = somatorio(num[i]);

    }
    for (int i = 0; i < 5; i++) {
        printf("Somatorio de 1 a %d = %d\n\n", num[i], resultado[i]);
    }
    return 0;
}

int lePositivo(void) {
    int n;
    scanf("%d", &n);
    while (n < 0) {
        printf("Entre com um valor positivo: ");
        scanf("%d", &n);
    }
    return n;
}

int somatorio(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}
