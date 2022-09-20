#include <stdio.h>

int main (void)
{
    const int a=10,b=10,e=2*a;
    int aux,i,j,vet1[a],vet2[b],vet3[e];

    for(i=0;i<a;i++)
    {
        //printf("Primeiro vetor");
        scanf("%d",&vet1[i]);

        //printf("Segundo vetor");
        scanf("%d",&vet2[i]);
    }

    j=0;

    for(i=0;i<a;i++)
    {
        vet3[j]=vet1[i];
        j++;
        vet3[j]=vet2[i];
        j++;
    }

    for(i=0;i<e;i++)
    {
        for(j=0;j<e;j++)
        {
            if(vet3[i]>vet3[j])
            {
                aux = vet3[i];
                vet3[i]=vet3[j];
                vet3[j]=aux;
            }
        }
    }

    for (i=0;i<e;i++)
    {
        printf("%d ",vet3[i]);
    }

}