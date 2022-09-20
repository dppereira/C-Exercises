#include <stdio.h>

int main (void)
{
    const int a=10, b=5;
    int aux,i,j,k,x,div,vet1[a],vet2[b],vet1_result[a],vet2_result[a];
    
    
    for(i=0;i<10;i++)
    {
        //printf("Primeiro Vetor:");
        scanf("%d",&vet1[i]);
    }

    for(i=0;i<5;i++)
    {
        //printf("Segundo Vetor:");
        scanf("%d",&vet2[i]);
    }

    aux=0;
    k=0;

    for (i=0;i<a;i++)
    {
        if(vet1[i]%2==0)
        {   
            x=0;

            for(j=0;j<b;j++)
            {
                x = x + vet2[j];
            }

            vet1_result[k]= x + vet1[i];
    
                aux++;

            k++;
        } 
    }
    
    k=0;

    for(i=0;i<a;i++)
    {
        if (vet1[i]%2!=0)
        {   
          div=0; 
            for(j=0;j<b;j++)
            {
                if(vet1[i]%vet2[j]==0)
                {
                    div++;
                }
            }

            vet2_result[k] = div;
            k++;
        }
    }
    
    for(i=0;i<aux;i++)
    {
        printf("%d ",vet1_result[i]);
    }
    
    for(i=0;i<k;i++)
    {
        printf("%d ",vet2_result[i]);
    }

    

}