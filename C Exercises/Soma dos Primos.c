#include <stdio.h>

int main (void)
{

    int i,m,n,soma=0,j=1,primo=0;

    scanf("%d %d",&m, &n);

    for(i=m;i<=n;i++)
    {
        primo=0;

        for(j=1;j<i;j++)
        {

         if(i%j==0)
            primo++;
         if(primo > 2)
                break;
         
        }
        
        if(primo==1) 
        soma = soma + i;

    }

    printf("%d",soma);

}