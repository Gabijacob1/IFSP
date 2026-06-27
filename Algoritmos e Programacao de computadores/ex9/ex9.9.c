#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter(char *destino, const char *origem) {
    int c1 = strlen(origem);
    for (int i = 0; i < c1; i++) {
        destino[i] = origem[c1 - 1 - i];
    }
    destino[c1] = '\0'; 
}

int main(void) {
    char str[100]; 
    char inverted[100];

    printf("String: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    inverter(inverted, str);

    printf("Invertida: %s\n", inverted);

    return 0;
}