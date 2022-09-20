#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *nextPrime(int n)
{
    int i, div = 0;
    int *result = (int *)malloc(sizeof(int));

    n += 1;
    while (div != 2)
    {
        div = 0;

        for (i = 1; i < 10; i++)
            if (n % i == 0)
            {
                div++;

                if (div == 3)
                    break;
            }

        if (div <= 2)
            break;
        else
            n += 1;
    }

    *result = n;
    return result;
}

int main()
{
    int n,*result;

    scanf("%d", &n);

    result = nextPrime(n);

    printf("%d", *result);

    free(result);
}

