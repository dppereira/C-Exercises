#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int strlength(char *palavra)
{
    int tam = 0;

    while (*palavra != '\0')
    {
        tam++;
        palavra++;
    }

    return tam;
}

bool combine(char *sopa, char *palavra, int let)
{
    int i, j, count = 0;

    for (i = 0; i < let; i++)
    {
        for (j = 0; j < strlength(palavra); j++)
        {
            if (sopa[i] == palavra[j])
            {
                count++;
                break;
            }
        }
    }

    if (count == strlength(palavra))
    {
        return true;
    }
    else
        return false;
}

int main(void)
{

    int let, i;
    char *sopa, palavra[100];

    // printf("Quantidade de letras que a sopa possui\n");
    scanf("%d", &let);

    sopa = malloc(let * sizeof(int));

    for (i = 0; i < let; i++)
    {
        // printf("Caracteres na sopa");
        scanf(" %c", &sopa[i]);
    }

    // printf("Palavra desejada");
    scanf(" %[^\n]%*c", palavra);

    if ((combine(sopa, palavra, let)) == true)
    {
        printf("S");
    }
    else
        printf("N");

    return 0;
}
