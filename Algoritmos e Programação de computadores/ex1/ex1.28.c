# include <stdio.h>
# include <stdlib.h>

int main(void) {
    int n1;
    printf("Quantidade de segundos: \n");
    scanf("%d", &n1);
    int horas = n1 / 3600;
    int minutos = (n1 % 3600) / 60;
    int segundos = n1 % 60;
    printf("%d segundo(s) correspondem a %d hora(s), %d minuto(s) e %d segundo(s)\n",
         n1, horas, minutos, segundos);

    return 0;
}