# include <stdio.h>
# include <stdlib.h>
int main(void) {
    int n1, n2;
    printf("Digite a diagonal maior de um losango: ");
    scanf("%d", &n1);
    printf("Digite a diagonal menor de um losango: ");
    scanf("%d", &n2);
    printf("Area = %d\n", (n1 * n2) / 2);
    return 0;
}
