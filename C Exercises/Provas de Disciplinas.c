#include <stdio.h>

int main (void)
{
    const int b=8, c=5;
    int i,j,a=0,aux,idad,idade[b],cod[c],quant[b][c],codigo,media=0,median=0;

    for (i=0;i<8;i++)
    {
        //printf("Idade aluno:");
        scanf("%d",&idade[i]);
    }

    for(i=0;i<5;i++)
    {
        //printf("Codigo disciplina:");
        scanf("%d",&cod[i]);
    }

    for(i=0;i<8;i++)
    {
        for(j=0;j<5;j++)
        {
            //printf("Quantidades de provas nas respectivas disciplinas:");
            scanf("%d",&quant[i][j]);
        }
    }

    scanf("%d",&codigo);

    for(i=0;i<5;i++)
    {

        if(cod[i]==codigo)
        {
            aux=i;
        } else a++;

        if (a>4)
        {
            printf("Erro\n");
        }
    }

    idad=0;

    for (i=0;i<8;i++)
    {
        for(j=0;j<5;i++)
        {
            if(idade[i]>=18 && idade[i]<=25 && quant[i][aux]>2)
            {
                idad++;
            }
            break;
        }
    }

    if (a>4)
    {
    
    } else printf("%d\n",idad);

    for (i=0;i<8;i++)
    {
        for(j=0;j<5;j++)
        {
            if (quant[i][j]<3)
            {
                printf("%d %d %d\n",i,idade[i],cod[j]);
            }
        }
    }

    for (i=0;i<8;i++)
    {
        for(j=0;j<5;j++)
        {
            if (quant[i][j]==0)
            {
                media+=idade[i];
                
                median++;
                
                break;
            }
        }
    }

    printf("%.2f",(float)media/median);
}