#include <stdio.h>
#include <stdlib.h>

void swapNumbers(int *arr, int *arraux, int *arr2)
{
    int i, j;

    j = *arraux;

    for (i = 0; i < *arraux + 1; i++, j--)
    {

        if (i == 0)
        {
            arr2[i] = arr[j];
        }
        else
            arr2[i] = arr[i - 1];
    }

    return;
}

int main(void)
{
    int elem, *arr, *arr2, arraux, i;

    printf("Digite quantos elementos terao no array: ");
    scanf(" %d", &elem);

    printf("\n");

    arr = (int *)malloc(sizeof(elem));
    arr2 = (int *)malloc(sizeof(elem));
    arraux = elem - 1;

    for (i = 0; i < elem; i++)
    {
        printf("Digite o elemento %d: ", i + 1);
        scanf(" %d", &arr[i]);
    }

    printf("\n");

    for (i = 0; i < elem; i++)
    {
        printf("O elemento %d antes da troca era: %d\n", i + 1, arr[i]);
    }

    printf("\n");

    swapNumbers(arr, &arraux, arr2);

    for (i = 0; i < elem; i++)
    {
        printf("O elemento %d depois da troca eh: %d\n", i + 1, arr2[i]);
    }

    free(arr);
    free(arr2);

    return;
}