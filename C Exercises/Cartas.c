#include <stdio.h>
#include <stdlib.h>

typedef struct regis
{
    int key;
} regist;

void sort(regist *result, int n)
{
    int i, j, menor;
    int inc = 0, dec = 0;

    for (i = 0; i < n - 1; i++)
    {
        menor = i;

        for (j = i + 1; j < n; j++)
            if (result[j].key < result[menor].key)
                dec++;
            else if (result[j].key > result[menor].key)
                inc++;
    }

    if (inc == 2 * n)
        printf("C");
    else if (dec == 2 * n)
        printf("D");
    else
        printf("N");
}

int main()
{
    int i;
    const int size = 5;
    regist result[size];

    for (i = 0; i < size; i++)
    {
        scanf("%d", &result[i].key);
    }

    sort(result, size);
}
