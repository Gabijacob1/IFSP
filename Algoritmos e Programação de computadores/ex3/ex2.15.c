# include <stdio.h>
# include <stdlib.h>
int main(void) {
    int n1;
    printf("Entre com sua idade: ");
    scanf("%d", &n1);
    if (n1 < 16){
        printf("Nao eleitor.");
    }
    else if (n1 >= 18 && n1 <= 65){
        printf("Eleitor obrigatorio.");
    }
    else if (n1 >= 16 && n1 < 18 || n1 > 65){
        printf("Eleitor facultativo.");
    }
   
    return 0;
}