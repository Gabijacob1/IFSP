#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n1 = 0;
    int n2 = 1;
    int n3;
    for (int i = 0; i < 20; i++){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ", n1);
    }

    return 0;
}