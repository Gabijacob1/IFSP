#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int h;

    printf("Altura: ");
    scanf("%d", &h);
    

    for (int y = 1; y <= h; y++){
        int qe = h-1;
        int qa = 2*h-1;

        for(int x = 1; x <= qe; x++){
            printf(" ");
        }
        for(int x = 1; x <= qa; x++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");

    return 0;

}