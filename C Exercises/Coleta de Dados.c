#include <stdio.h>

void le_dados(int *idade, char *sexo, float *salario, int *filhos, int tam_v);
float media(float *salario, int tam_v);
void idades(int *idade, int *maior, int *menor, int tam_v);
int qtdade(char *sexo, int *filhos, float *salario, int tam_v);

int main(void)
{
    const int tam_v=15;
    int idd[tam_v],fil[tam_v];
    float sal[tam_v];
    char sx[tam_v];
    int menor=0,maior=0;

    le_dados(idd, sx, sal, fil, tam_v);

    printf("%.2f ",media(sal,tam_v));

    idades (idd,&maior,&menor,tam_v);

    printf("%d ", menor);

    printf("%d ", maior);

    printf("%d", qtdade(sx,fil,sal,tam_v));

    return 0;
}

void le_dados(int *idade, char *sexo, float *salario, int *filhos, int tam_v)
{
    int i;

    for (i=0;i<tam_v;i++)
    {
        //printf("Qual sua idade?");
        scanf("%d",&idade[i]);

        //printf("Qual seu sexo?");
        scanf(" %c",&sexo[i]);

        //printf("Qual seu salario?");
        scanf("%f",&salario[i]);

        //printf("Quantos filhos vc tem?");
        scanf("%d",&filhos[i]);
    }
}

float media(float *salario, int tam_v)
{
    int i;
    float aux, media;

    aux = 0;

    for(i=0;i<tam_v;i++)
    {
        aux += salario[i];
    }

    media = aux/tam_v;

    return media;
}

void idades(int *idade, int *maior, int *menor, int tam_v)
{
    int i;


    for(i=0;i<tam_v;i++)
    {
        if (i==0)
        {
        *maior = idade [0];
        *menor = idade [0];
        }

        if (idade[i]>*maior)
        *maior = idade[i];

        if (idade[i]<*menor)
        *menor = idade[i];
    }

}

int qtdade(char *sexo, int *filhos, float *salario, int tam_v)
{
    int i,aux=0;

    for(i=0;i<tam_v;i++)
    {
        if (sexo[i]== 'M' && filhos[i]==3 && salario[i]<500)
        {
            aux++;
        }
    }

    return aux;
}