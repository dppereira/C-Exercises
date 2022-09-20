#include <stdio.h>

int main (void)
{
    float price;
    int c;
    char s;
    float a;

    scanf("%f", &price);

    scanf("%d",&c);

    scanf(" %c",&s);

    if (c==1) 
    {
        if (price>25)
        {
            a = price*0.12;
            if ((s =='R') || (s =='r'))
            {
                if (a <1)
                    a = 1;
                else if (a>99)
                         a = 10;
            }
            if ((s =='N') || (s =='n'))
            {
                if (a <1)
                    a = 2;
                else if (a>99)
                         a = 20;
            }
            printf("%.2f ", a);
            printf("%.2f", price+a);
        }
        else 
        { 
            a = price*0.05;
            if ((s =='R') || (s =='r'))
            {
                if (a <1)
                    a = 1;
                else if (a>99)
                         a = 10;
            }
            if ((s =='N') || (s =='n'))
            {
                if (a <1)
                    a = 2;
                else if (a>99)
                         a = 20;
            }
            printf("%.2f ", a);
            printf("%.2f", price+a);
        }
    }
    else if (c==2)
    {
        if (price>25)
        {
            a = price*0.15;
            if ((s =='R') || (s =='r'))
            {
                if (a <1)
                    a = 1;
                else if (a>99)
                         a = 10;
            }
            if ((s =='N') || (s =='n'))
            {
                if (a <1)
                    a = 2;
                else if (a>99)
                         a = 20;
            }
            printf("%.2f ", a);
            printf("%.2f", price+a);
        }
        else 
        {
            a = price*0.08;
            if ((s =='R') || (s =='r'))
            {
                if (a <1)
                    a = 1;
                else if (a>99)
                         a = 10;
            }
            if ((s =='N') || (s =='n'))
            {
                if (a <1)
                    a = 2;
                else if (a>99)
                         a = 20;
            }
            printf("%.2f ", a);
            printf("%.2f", price+a);
        }
    }
    else if (c==3)
   {
        if (price>25)
        {
            a = price*0.18;
            if ((s =='R') || (s =='r'))
            {
                if (a <1)
                    a = 1;
                else if (a>99)
                         a = 10;
            }
            if ((s =='N') || (s =='n'))
            {
                if (a <1)
                    a = 2;
                else if (a>99)
                         a = 20;
            }
            printf("%.2f ", a);
            printf("%.2f", price+a);
        }
        else 
        {
            a = price*0.1;
            if ((s =='R') || (s =='r'))
            {
                if (a <1)
                    a = 1;
                else if (a>99)
                         a = 10;
            }
            if ((s =='N') || (s =='n'))
            {
                if (a <1)
                    a = 2;
                else if (a>99)
                         a = 20;
            }
            printf("%.2f ", a);
            printf("%.2f", price+a);
        }
    }
}