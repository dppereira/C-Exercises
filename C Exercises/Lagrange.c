// Nome: Diogo Paiva Pereira, RA: 211152129, Período Noturno.

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////
// FUNCOES

int main(void)
{

    int tam, i, j;

    printf("Insira o numero de pontos tabelados: ");
    scanf("%d", &tam);

    float fx[tam], x[tam], px;

    printf("\n|IMPORTANTE: Caso o numero seja decimal, use sempre '.'|\n");

    printf("\n    |Valores de x|\n");

    for (i = 0; i < tam; i++)
    {
        printf("Insira o valor de x%d: ", i);
        scanf(" %f", &x[i]);
    }

    printf("\n  |Valores de f(x)|\n");

    for (i = 0; i < tam; i++)
    {
        printf("Insira o valor de y%d: ", i);
        scanf(" %f", &fx[i]);
    }

    printf("\nInsira o ponto de p(x) desejado: ");
    scanf(" %f", &px);
    printf("\n");

    float pxdef, num, div, lx;

    pxdef = 0;

    for (i = 0; i < tam; i++)
    {

        num = 1;
        div = 1;
        lx = 1;

        for (j = 0; j < tam; j++)
        {
            if (i == j)
            {
                
                if(j+1 == tam)
                {
                    lx = (num / div);
                    break;
                }

                j++;
                
            }

            num *= px - x[j];

            div *= x[i] - x[j];

            if (j == tam - 1)
            {
                lx = (num / div);
            }
        }

        pxdef += fx[i] * lx;

    }

    printf("O valor de p(%.2f) e : %.4f", px, pxdef);
    return 0;
}
