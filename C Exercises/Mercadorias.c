#include <stdio.h>


int main(void)
    {

    const int a=10,b=10;
    int c=2,i,j,vet1[a],vet2[b],x,y,z,ci=0; //ci = codigo inexistente

    for(i=0;i<a;i++)
    {
        //printf("Codigo do Produto: ");
        //printf("Total de Produtos em Estoque: ");
        scanf("%d %d",&vet1[i],&vet2[i]);
    }

    for (i=0;i<c;i++)
    {
        //printf("Codigo do Cliente: ");
        //printf("Codigo do Produto: ");
        //printf("Quantidade de Produtos: ");
        scanf("%d %d %d",&x,&y,&z);

        if(x==0)
        break;

        ci=0;

        for(j=0;j<a;j++)
        {
            if (y==vet1[j])
            {
            ci=0;
            break;
            }
            else ci++;
        }

        if(ci>=1)
        printf("Codigo inexistente\n");
        
        for(j=0;j<a;j++)
        {
            if (y==vet1[j] && z<=vet2[j])
            {
                printf("Pedido atendido. Obrigado e volte sempre\n");
                vet2[j] = vet2[j] - z;
            }
            else if(y==vet1[j] && z>vet2[j])
            {
                printf("Sem estoque suficiente para esta compra\n");
            }
        }
    
        c++;

    }

    for(i=0;i<a;i++)
    {
        printf("%d: %d\n",vet1[i],vet2[i]);
    }

    }