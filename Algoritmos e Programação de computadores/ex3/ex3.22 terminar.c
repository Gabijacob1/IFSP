#include <stdio.h>
#include <stdlib.h>

int main (void){
    int h = 9;
    int c = 'x';
    int p = '.'

    for (int i = 0; i < h; i++){
      for(int j = 0; j < h; j++){
        if (i == 0 || i == h-1 || j == h-1 || i == j || i + j = h-1){
            printf("%c",c);
        } else {
            printf("%c",p);

        }
    }
}
    printf("\n");
   


}