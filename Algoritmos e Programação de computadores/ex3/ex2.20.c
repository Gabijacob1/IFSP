# include <stdio.h>
# include <stdlib.h>

int main (void){
    char c1;
    printf("Digite um caractere: ");
    scanf(" %c", &c1);

    switch (c1){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o': 
        case 'O':
        case 'u':
        case 'U':
        printf("O caractere '%c' e uma vogal.", c1);
        break;

        case 'b':
        case 'B':
        case 'c':
        case 'C':
        case 'd':
        case 'D':
        case 'f':
        case 'F':
        case 'g':
        case 'G':
        case 'h':
        case 'H':
        case 'j':
        case 'J':
        case 'k':
        case 'K':
        case 'l':
        case 'L':
        case 'm':
        case 'M':
        case 'n':
        case 'N':
        case 'p':
        case 'P':
        case 'q':
        case 'Q':
        case 'r':
        case 'R':
        case 's':
        case 'S':
        case 't':
        case 'T':
        case 'v':
        case 'V':
        case 'w':
        case 'W':
        case 'x':
        case 'X':
        case 'y':
        case 'Y':
        case 'z':
        case 'Z':
        printf("O caractere '%c' e uma consoante.", c1);
        break;

        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        printf("O caractere '%c' e um digito.", c1);
        break;

        default:
        printf("O caractere '%c' e um simbolo.", c1);
        break;
    }




}