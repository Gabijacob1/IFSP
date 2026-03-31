#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n1;
    printf("Entre com um numero entre 1 e 3999: ");
    scanf("%d", &n1);

    if (n1 < 1 || n1 > 3999){
        printf("Numero invalido!");
    }
    else{
        int milhar = n1 / 1000;
        int centena = (n1 % 1000) / 100;
        int dezena = (n1 % 100) / 10;
        int unidade = n1 % 10;

        printf("%d = ", n1);

         switch(milhar) {
            case 1: printf("M"); break;
            case 2: printf("MM"); break;
            case 3: printf("MMM"); break;  
        }

         switch(centena) {
            case 1: printf("C"); break;
            case 2: printf("CC"); break;
            case 3: printf("CCC"); break;
            case 4: printf("CD"); break;   
            case 5: printf("D"); break;
            case 6: printf("DC"); break;
            case 7: printf("DCC"); break;
            case 8: printf("DCCC"); break;
            case 9: printf("CM"); break;   
        }

          switch(dezena) {
            case 1: printf("X"); break;
            case 2: printf("XX"); break;
            case 3: printf("XXX"); break;
            case 4: printf("XL"); break;   
            case 5: printf("L"); break;
            case 6: printf("LX"); break;
            case 7: printf("LXX"); break;
            case 8: printf("LXXX"); break;
            case 9: printf("XC"); break;   
        }
       
        switch(unidade) {
            case 1: printf("I"); break;
            case 2: printf("II"); break;
            case 3: printf("III"); break;
            case 4: printf("IV"); break;   
            case 5: printf("V"); break;
            case 6: printf("VI"); break;
            case 7: printf("VII"); break;
            case 8: printf("VIII"); break;
            case 9: printf("IX"); break;   
        }
    }

    return 0;
}


