#include <stdio.h>
#include <stdlib.h>

/*void integration(int *max_pool, int *result, int *aux, int a, int tam)
{
  int i,j;

  for (i = 0; i < a; i++)
  {
    for (j = 0; j < a; j++)
    {
        aux[i][j] = max_pool[i][j];
    }
  }

  *result[0][0] = max_matriz(aux, a);

  for (i = a; i < 2*a; i++)
  {
    for (j = a; j < 2*a; j++)
    {
        aux[i-a][j-a] = max_pool[i][j];
    }
  }

  result [1][1] = max_matriz(aux,a);

  for (i = a; i < 2*a; i++)
  {
    for (j = 0; j < a; j++)
    {
        aux[i-a][j] = max_pool[i][j];
    }
  }

  result [0][1] = max_matriz(aux,a);

  for (i = 0; i < a; i++)
  {
    for (j = a; j < 2*a; j++)
    {
        aux[i][j-a] = max_pool[i][j];
    }
  }

  result [1][0] = max_matriz(aux,a);

  return 0;

}*/

int main(void)
{
    int const a = 2, tam = 4;
    int i, j, maior,tama;

    // printf("Tamanho da matriz quadrada\n");
    scanf("%d", &tama);

    tama=0;

    int result[tam / 2][tam / 2], aux[a][a], max_pool[tam][tam];

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            // printf("Termos da matriz");
            (scanf("%d", &max_pool[i][j]));
        }
    }

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            aux[i][j] = max_pool[i][j];
        }
    }

    maior = 0;

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            if (aux[i][j] > maior)
            {
                maior = aux[i][j];
            }
        }
    }

    result[0][0] = maior;

    for (i = a; i < 2 * a; i++)
    {
        for (j = a; j < 2 * a; j++)
        {
            aux[i - a][j - a] = max_pool[i][j];
        }
    }

    maior = 0;

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            if (aux[i][j] > maior)
            {
                maior = aux[i][j];
            }
        }
    }

    result[1][1] = maior;

    for (i = a; i < 2 * a; i++)
    {
        for (j = 0; j < a; j++)
        {
            aux[i - a][j] = max_pool[i][j];
        }
    }

    maior = 0;

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            if (aux[i][j] > maior)
            {
                maior = aux[i][j];
            }
        }
    }

    result[1][0] = maior;

    for (i = 0; i < a; i++)
    {
        for (j = a; j < 2 * a; j++)
        {
            aux[i][j - a] = max_pool[i][j];
        }
    }

    maior = 0;

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            if (aux[i][j] > maior)
            {
                maior = aux[i][j];
            }
        }
    }

    result[0][1] = maior;

    for (i = 0; i < tam / 2; i++)
    {
        for (j = 0; j < tam / 2; j++)
        {
            printf("%d ", result[i][j]);
        }

        printf("\n");
    }

    return 0;
}
