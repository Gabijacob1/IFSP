#include <stdio.h>
#include <stdlib.h>

int main (void){
    int h;
    char d;
    char p;

    printf("Altura: ");
    scanf("%d", &h);

    printf("Caractere de desenho: ");
    scanf(" %c", &d);

    printf("Caractere de preenchimento: ");
    scanf(" %c", &p);

    if (h > 0){
        for (int i = 0; i < h; i++){
      for(int j = 0; j < h; j++){
        if (i == 0 || j == 0 || i == h-1 || j == h-1 || i == j || i + j == h-1){
            printf("%c", d);
        } else {
            printf("%c", p);
        }
    }
     printf("\n");
}
     printf("\n");

    } else {
    h = -h;
    char t = d;
    d = p;
    p = t;
    
    if (h > 0){
        for (int i = 0; i < h; i++){
      for(int j = 0; j < h; j++){
        if (i == 0 || j == 0 || i == h-1 || j == h-1 || i == j || i + j == h-1){
            printf("%c", d);
        } else {
            printf("%c", p);
        }
    }
    printf("\n");
}
    
}
     printf("\n");
}
}
