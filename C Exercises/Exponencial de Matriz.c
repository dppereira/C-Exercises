// Nome: Diogo Paiva Pereira, RA: 211152129, Período Noturno.

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////
// FUNCOES

int main(void)
{

    int tam, i, j, k;

    printf("Insira o numero de pontos tabelados: ");
    scanf("%d", &tam);

    float y[tam], x[tam];

    printf("\n|IMPORTANTE: Caso o numero seja decimal, use sempre '.'|\n");

    printf("\n    |Valores de x|\n");

    for (i = 0; i < tam; i++)
    {
        printf("Insira o valor de x%d: ", i);
        scanf(" %f", &x[i]);
    }

    printf("\n  |Valores de y|\n");

    for (i = 0; i < tam; i++)
    {
        printf("Insira o valor de y%d: ", i);
        scanf(" %f", &y[i]);
    }

    printf("\n");

    float soma_x, soma_x2, soma_y, soma_xy;

    for (i = 0; i < tam; i++)
    {
        soma_x += x[i];
        soma_x2 += (x[i] * x[i]);
        soma_y += y[i];
        soma_xy += (x[i] * y[i]);
    }

    // 5b + 14,4a = 68
    // 14,4b + 58,4a = 249,99

    float aux[2][2], b2, sub, indep[2], result[2];
    //float *vetresult = malloc(2 * sizeof(int));

    aux[0][0] = tam;
    aux[0][1] = soma_x;
    aux[1][0] = soma_x;
    aux[1][1] = soma_x2;

    indep[0] = soma_y;
    indep[1] = soma_xy;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (j > i)
            {
                b2 = ((aux[j][i]) / (aux[i][i]));

                for (k = 0; k < 2; k++)
                {
                    aux[j][k] = aux[j][k] - b2 * aux[i][k];
                }

                indep[j] = indep[j] - b2 * indep[i];
            }
        }
    }

    for (i = 2 - 1; i >= 0; i--)
    {
        sub = 0;

        for (k = 2 - 1; k >= 0; k--)
        {
            sub += result[k] * aux[i][k];
        }

        result[i] = (indep[i] - sub) / aux[i][i];
    }

    float coef_a, coef_b, vety[tam], aux2;

    coef_b = result[0];
    coef_a = result[1];

    printf("O coeficiente de 'a' eh: %f\n", coef_a);
    printf("O coeficiente de 'b' eh: %f\n\n", coef_b);

    for (i = 0; i < tam; i++)
    {
        aux2 = 1;

        for (j = 0; j <= x[i]; j++)
        {
            aux2 *= coef_b;
        }

        vety[i] = coef_a * aux2;
    }

    printf("Os valores ajustados de Y sao: \n");

    for (i = 0; i < tam; i++)
    {
        printf("y%d: %.2f \n",i+1, vety[i]);
    }

    return 0;
}
