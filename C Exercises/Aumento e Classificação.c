#include <stdio.h>

int main (void)
{
    float price;

    scanf("%f",&price);

    if (price>=100)
    { 
    printf("%.2f\n", price+(price*0.15));

        if (price+(price*0.15)>=200)
        printf("Muito Caro");
        else if (price+(price*0.15)>=120)
        printf("Caro");
        else if (price+(price*0.15)>=100)
        printf("Normal");
    }
    else if (price>=50)
    {
    printf("%.2f\n", price+(price*0.1));

        if (price+(price*0.15)>=80)
        printf("Normal");
        else if (price+(price*0.15)>=50)
        printf("Barato");
    }
    else if (price<50)
    {
    printf("%.2f\n", price+(price*0.05));
    printf("Barato");
    }

}