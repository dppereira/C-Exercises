#include <stdio.h>
#include <string.h>

int countwords(char *str)
{
    char *token;
    int tam = 0;

    token = strtok(str, " ");

    while (token != NULL)
    {
        tam++;
        token = strtok(NULL, " ");
    }

    return tam;
}

int main(void)
{
    char str[50];

    // printf("Digite sua string: ");
    scanf(" %[^\n]%*c", str);

    printf("%d", countwords(str));

    return 0;
}