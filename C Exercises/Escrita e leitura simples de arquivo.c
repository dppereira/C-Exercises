#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    FILE *fp;

    char str[50];

    fp = fopen("arquivo.txt", "a+");

    //printf("Digite uma string no arquivo de texto\n");
    scanf(" %[^\n]%*c\n", str);

    fputs(str, fp);
    fputs("\n", fp);

    fflush(fp);

    rewind(fp);

    fgets(str,50,fp);

    printf("%s",str);

    fclose(fp);

    return 0;

}