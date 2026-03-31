# include <stdio.h>
# include <stdlib.h>

int main(void) {
   float n1, n2, n3, M;

   printf("Nota Av. 1: ");
   scanf("%f", &n1);
        
   printf("Nota Av. 2: ");
   scanf("%f", &n2);
   
   printf("Nota Optativa: ");
   scanf("%f", &n3);

    if (n3 >= 0) {
        if (n1 <= n2 && n3 > n1) {
            n1 = n3;
        } else if (n2 < n1 && n3 > n2) {
            n2 = n3;
        }
    }

     M = ((n1 + n2)/ 2);
     printf("Media: %.2f\n", M);

        if (M >= 6.0){
            printf("Aprovado!");
        } else if (M >= 4.0){
            printf("Exame.");
        } else {
            printf("Reprovado...");
        }


    return 0;
}