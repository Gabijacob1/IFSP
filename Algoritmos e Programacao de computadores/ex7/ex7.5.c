#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehPar(int n);

bool ehDivisivel(int dividendo, int divisor);

int main(void){
    int n1[5];
    int n2[5];
    bool n3[5];
    bool n4[5];
    

    for(int i = 0; i < 5; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &n1[i]);

        n4[i] = ehPar(n1[i]);

        printf("n2[%d]: ", i);
        scanf("%d", &n2[i]);

        n3[i] = ehDivisivel(n1[i], n2[i]);
        

    }
    for(int i = 0; i < 5; i++){
        if (n4[i] == true){
            if(n3[i] == true){
                printf("%d eh par e %d eh divisivel por %d\n", n1[i], n1[i], n2[i]);
            }else if(n3[i] == false){
                printf("%d eh par e %d nao eh divisivel por %d\n", n1[i], n1[i], n2[i]);
            }
        } else if (n4[i] == false){
            if(n3[i] == true){
                printf("%d eh impar e %d eh divisivel por %d\n", n1[i], n1[i], n2[i]);
            }else if(n3[i] == false){
                printf("%d eh impar e %d nao eh divisivel por %d\n", n1[i], n1[i], n2[i]);
            }
        }
    }
}

bool ehPar(int n){

    if (n % 2 == 0){
        return true;
    }else {
        return false;
    }
}

bool ehDivisivel(int dividendo, int divisor){
    
    if (dividendo % divisor == 0){
        return true; 
    } else {
        return false; 
    }
}

