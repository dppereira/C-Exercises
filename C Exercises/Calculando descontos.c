#include <stdio.h>

int main (void)
{
    float cod,quant;
    float a,b;

    scanf("%f", &cod);

    scanf("%f", &quant);

    if (cod>=1)
    {
        if (cod >=31)
        {
        a = 30;
            if (a*quant >=500)
            b = a*quant*0.15;
            else if (a*quant >=250)
            b = a*quant*0.1;
            else b = a*quant*0.05;
        printf("%.2f %.2f %.2f %.2f", a, a*quant, b, a*quant-b);
        }

        else if (cod >=21)
        {
        a = 20;
            if (a*quant >=500)
            b = a*quant*0.15;
            else if (a*quant >=250)
            b = a*quant*0.1;
            else b = a*quant*0.05;
        printf("%.2f %.2f %.2f %.2f", a, a*quant, b, a*quant-b);
        }

        else if (cod >=11)
        {
        a = 15;
            if (a*quant >=500)
            b = a*quant*0.15;
            else if (a*quant >=250)
            b = a*quant*0.1;
            else b = a*quant*0.05;
        printf("%.2f %.2f %.2f %.2f", a, a*quant, b, a*quant-b);
        }

        else if (cod >=1)
        {
        a = 10;
            if (a*quant >=500)
            b = a*quant*0.15;
            else if (a*quant >=250)
            b = a*quant*0.1;
            else b = a*quant*0.05;
        printf("%.2f %.2f %.2f %.2f", a, a*quant, b, a*quant-b);
        }

    }
}