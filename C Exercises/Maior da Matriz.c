#include <stdio.h>

int elemento(int mat[][10], int linhas, int colunas);

int main(void)
{
    const int linhas = 10, colunas = 10;
    int i,j,m[linhas][colunas];

    for(i=0;i<linhas;i++)
    {
        for(j=0;j<colunas;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    printf("%d", elemento(m,linhas, colunas));
    return 0;
}

int elemento(int mat[][10], int linhas, int colunas)
{
    int i,j,aux=0;

    for(i=0;i<linhas;i++)
    {
        for(j=0;j<colunas;j++)
        {
            if(j>i)
            {
                if (mat[i][j]>aux)
                {
                    aux = mat[i][j];
                }
            }
        }
    }

    return aux;
}