#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void decompoeTempo( int diaDoAno, int ano, int *mes, int *dia);
bool ehBissexto(int ano);

int main(void){
    int n1;
    int n2;
    int m;
    int d;

    printf("Dia do ano: ");
    scanf("%d", &n1);

    printf("Ano: ");
    scanf("%d", &n2);

    decompoeTempo(n1, n2, &m, &d);

    printf("O dia %d do ano %d cai no dia %d do mes %d.", n1, n2, d, m);


}


bool ehBissexto(int ano){
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}
void decompoeTempo( int diaDoAno, int ano, int *mes, int *dia){
    int diasNoMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (ehBissexto(ano)) {
        diasNoMes[2]++; 
    }
    int mesAtual = 1;
    while (diaDoAno > diasNoMes[mesAtual]) {
        diaDoAno -= diasNoMes[mesAtual];
        mesAtual++;
    }
    *mes = mesAtual;
    *dia = diaDoAno;
}