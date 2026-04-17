# include <stdio.h>
# include <stdlib.h>
int main(void) {
    int n1=0;
    int n2=0;
    int n3 = 0;
    int n4 = 0;
    
    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);
    if (n1 <= n2){
        for (int i = n1; i <= n2; i++){
            n3++;
        }
    } else {
        for (int i = n2; i <= n1; i++){
            n3++;
        }
    }

    n4 = ((n1 + n2) * n3)/2;
    
    printf("Somatorio entre %d e %d: %d", n1, n2, n4);
    return 0;
}