# include <stdio.h>
# include <stdlib.h>
int main(void) {
    int n1=0;
    int n2=0;
    int n3=0;
    int n4=0;
    int n5=0;

    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    if (n1 <= n2){
        for (int i = n1; i <= n2; i++){
            if (i % 2 == 0){
                n3++;
            }      
            if (i % 3 == 0){
                n4++;
            }      
            if (i % 4 == 0){
                n5++;
            }
        }
        printf ("Multiplos de 2: %d \n", n3);
        printf ("Multiplos de 3: %d \n", n4);
        printf ("Multiplos de 4: %d \n", n5);


    } else {
        for (int i = n2; i <= n1; i++){
            if (i % 2 == 0){
               n3++;
            }      
            if (i % 3 == 0){
                n4++;
            }      
            if (i % 4 == 0){
                n5++;
            }
        }
        printf ("Multiplos de 2: %d \n", n3);
        printf ("Multiplos de 3: %d \n", n4);
        printf ("Multiplos de 4: %d \n", n5);
    }
   
    return 0;
}