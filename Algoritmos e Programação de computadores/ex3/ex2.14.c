# include <stdio.h>
# include <stdlib.h>
int main(void) {
    float n1, n2, n3;

    printf("Entre com seu peso em quilogramas: ");
    scanf("%f", &n1);

    printf("Entre com sua altura em metros: ");
    scanf("%f", &n2);

    n3 = n1 / (n2 * n2);

    printf("IMC: %.2f\n", n3);

    if (n3 < 17.0) {
        printf("Voce esta muito abaixo do peso ideal!");
    }
    else if (n3 >= 17.0 && n3 < 18.5){
        printf("Voce esta abaixo do peso ideal!");
    }
    else if (n3 >= 18.5 && n3 < 25.0){
        printf("Parabens! Voce esta em seu peso normal!");
    }
    else if (n3 >= 25.0 && n3 < 30.0){
        printf("Atencao, voce esta acima de seu peso (sobrepeso)!");
    }
    else if (n3 >= 30.0 && n3 < 35.0){
        printf("Cuidado! Obesidade grau I!");
    }
    else if (n3 >= 35.0 && n3 < 40.0){
        printf("Cuidado! Obesidade grau II!");
    }
    else{
        printf("Muito cuidado!!! Obesidade grau III!");
    }


    return 0;
}