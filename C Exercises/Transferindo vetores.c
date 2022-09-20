#include <stdio.h>

void maior_menor(int *x, int *a, int *b, int tam_v, int *cont_a, int *cont_b);

int main(void)
{
    const int tam_v=30;
    int x[tam_v],i;
    int a[tam_v],b[tam_v],cont_a=0,cont_b=0;

    for(i=0;i<tam_v;i++)
    {
        scanf("%d",&x[i]);
    }

    maior_menor(x,a,b,tam_v,&cont_a,&cont_b);


    for(i=0;i<cont_a;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=0;i<cont_b;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}

void maior_menor(int *x, int *a, int *b, int tam_v, int *cont_a, int *cont_b)
{
    int i,j,k;

    j=0;
    k=0;

    for(i=0;i<tam_v;i++)
    {

        if(x[i]>0)
        {
            a[j] = x[i];
            *cont_a+=1;
            j++;
        } 
        else
        {
            b[k] = x[i];
            *cont_b+=1;
            k++;
        }

    }

    

}


/*
void maior_menor(int *x, int *a, int *b, int tam_v, int *cont_a, int *cont_b)
{
    int i;

    for(i=0;i<tam_v;i++)
    {
        if(x[i]>0)
        {
            *cont_a++;

        } 
        else
        {
            *cont_b++;
        }
    }

    for(i=0;i<tam_v;i++)
    {
        if(x[i]>0)
        {
            a[i] = x[i];
        } 
        else
        {
            b[i] = x[i];
        }
    }

}*/