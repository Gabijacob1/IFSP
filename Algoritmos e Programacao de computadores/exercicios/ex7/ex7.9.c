#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool ehTriangulo(int ladoA, int ladoB, int ladoC);

int tipoTriangulo(int ladoA, int ladoB, int ladoC);

int lePositivo(void);

int main(void){
    int T1[5];
    int T2[5];
    int T3[5];

    for(int i = 0; i < 5; i++){
        printf("ladoA[%d]: ", i);

        T1[i] = lePositivo();

        printf("ladoB[%d]: ", i);

        T2[i] = lePositivo();

        printf("ladoC[%d]: ", i);

        T3[i] = lePositivo();
    }
    for(int i = 0; i < 5; i++){
        if(tipoTriangulo(T1[i], T2[i], T3[i]) == 1){
            printf("Valores %d, %d e %d: triangulo equilatero\n", T1[i], T2[i], T3[i]);
        } 
        else if(tipoTriangulo(T1[i], T2[i], T3[i]) == 2){
            printf("Valores %d, %d e %d: triangulo isosceles\n", T1[i], T2[i], T3[i]);
        }
        else if(tipoTriangulo(T1[i], T2[i], T3[i]) == 3){
            printf("Valores %d, %d e %d: triangulo escaleno\n", T1[i], T2[i], T3[i]);
        } else if(tipoTriangulo(T1[i], T2[i], T3[i]) == 0){
            printf("Valores %d, %d e %d: nao formam um triangulo\n", T1[i], T2[i], T3[i]);
        }
    }


}

int lePositivo(void){
    int n;
    scanf("%d", &n);

     while (n <= 0) {
        printf("Entre com um valor positivo: ");
        scanf("%d", &n);
    }
    return n;
}

bool ehTriangulo(int ladoA, int ladoB, int ladoC){
    int soma;
    if((ladoA < ladoB + ladoC) && (ladoB < ladoA + ladoC) && (ladoC < ladoA + ladoB) ){
       return true;
    }
    return false;

}

int tipoTriangulo(int ladoA, int ladoB, int ladoC){
    if(ehTriangulo(ladoA, ladoB, ladoC) == true){
         if(ladoA == ladoB && ladoB == ladoC && ladoA == ladoC){
            return 1;
         } else if (ladoA != ladoB && ladoB != ladoC && ladoA != ladoC){
            return 3;
         } else if ((ladoA == ladoB && ladoA != ladoC) ||
         (ladoB == ladoC && ladoB != ladoA)|| (ladoA == ladoC && ladoA != ladoB)){
            return 2;
         }
    } else{
        return 0;
    }
}


