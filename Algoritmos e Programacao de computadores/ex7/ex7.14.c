#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void imprimeDuplaClassificada(int n1, int n2, bool emOrdemCrescente);

int main(void){
    int n1[5];
    int n2[5];
    bool emOrdemCrescente[5];

    for(int i = 0; i < 5; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &n1[i]);

        printf("n2[%d]: ", i);
        scanf("%d", &n2[i]);

      
    }
    for(int i = 0; i < 5; i++){
        if(i == 0 || i == 2 || i == 4){
            emOrdemCrescente[i] = true;
        } else{
            emOrdemCrescente[i] = false;
        }
        imprimeDuplaClassificada(n1[i], n2[i], emOrdemCrescente[i]);

    }

}


void imprimeDuplaClassificada(int n1, int n2, bool emOrdemCrescente){
    

    if(emOrdemCrescente == true){
        if (n1 <= n2) {
            printf("%d e %d: %d <= %d\n", n1, n2, n1, n2);
        } else {
            printf("%d e %d: %d <= %d\n", n1, n2, n2, n1);
        }
    } else{
        if (n1 <= n2) {
            printf("%d e %d: %d >= %d\n", n1, n2, n2, n1);
        } else {
            printf("%d e %d: %d >= %d\n", n1, n2, n1, n2);
    }
    }
    

}
