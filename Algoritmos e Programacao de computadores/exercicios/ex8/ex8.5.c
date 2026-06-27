#include <stdlib.h>
#include <stdio.h>

int buscar(const int *a, int n, int chave);

int main (void){
    int array[10];
    int n;
    int chave;

    for(int i = 0; i < 10; i++){
        printf("n[%d]: ",i);
        scanf("%d", &array[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &chave);

    n = buscar(array, 10, chave);



    if(n != -1){
        printf("O valor %d foi encontrado na posicao %d.", chave, n);
    } else {
        printf("O valor %d nao foi encontrado.", chave);
    }
    

}


int buscar(const int *a, int n, int chave){
    for(int i = 0; i < n; i++){
        if(a[i] == chave){
            return n = i;
        } 
    }
   
    return n = -1;
    
}
   



