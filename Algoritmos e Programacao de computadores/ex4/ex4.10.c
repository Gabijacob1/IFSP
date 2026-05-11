#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5];
    int n1;
    int n2 = 0;
    int array2[5];
    int q = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    printf("Copiar maiores que: ");
    scanf("%d", &n1);

    for (int i = 0; i < 5; i++)
    {
        if (array[i] > n1)
        {
            array2[i] = array[i];
            n2++;
        }
        else
        {
            array2[i] = 0;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (n2 > 0){
            if (array2[i] != 0)
            {
                printf("array2[%d]: %d\n", q++, array2[i]);
            }
        } else {
            printf("Nao houve copia!\n");
            break;
        }
    }
    return 0;
}