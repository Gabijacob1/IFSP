#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int h;

    printf("Altura: ");
    scanf("%d", &h);

    if (h < 0){
        h = -h;
        for (int y = h; y >= 1; y--){
        int qe = h - y;
        int qa = 2*y-1;

        for(int x = 1; x <= qe; x++){
            printf(" ");
        }
        for(int x = 1; x <= qa; x++){
            printf("*");
        }
        printf("\n");
    }
}else{
        for (int y = 1; y <= h; y++){
        int qe = h - y;
        int qa = 2*y-1;

        for(int x = 1; x <= qe; x++){
            printf(" ");
        }
        for(int x = 1; x <= qa; x++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");


    }
    

    
    return 0;

}