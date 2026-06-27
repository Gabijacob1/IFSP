#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehPrimo(int n);

int main(void){
    int n1;

    for(int i = 1; i <= 20; i++){
        if(ehPrimo(i)){
            printf("%d: eh primo\n", i);
        }else{
            printf("%d: nao eh primo\n", i);
        }
    }
    return 0;
}

bool ehPrimo(int n){
    if (n <= 1){
        return false;
    }
   
    for(int i = 2; i < n; i++){  
        if(n % i == 0){
            return false;
        }
    }
    return true;

}




