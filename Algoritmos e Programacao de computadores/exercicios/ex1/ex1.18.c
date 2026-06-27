# include <stdio.h>
# include <stdlib.h>
int main(void) {
    float n1, n2;
    printf("Digite a diagonal maior de um losango: ");
    scanf("%f", &n1);
    printf("Digite a diagonal menor de um losango: ");
    scanf("%f", &n2);
    printf("Area = %.2f\n", (n1 * n2) / 2);
    return 0;
}
