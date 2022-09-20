#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    char simb;
    int prior;
} flush;

void chan(flush *a, flush *b)
{
    flush t = *a;
    *a = *b;
    *b = t;
}

int divide(flush vet[], int menor, int alta)
{
    flush pivot = vet[alta];
    int i = (menor - 1);

    for (int j = menor; j <= alta - 1; j++)
    {
        if (vet[j].prior >= pivot.prior)
        {
            i++;
            chan(&vet[i], &vet[j]);
        }
    }

    chan(&vet[i + 1], &vet[alta]);
    return (i + 1);
}

void sort(flush vet[], int menor, int alta)
{
    if (menor < alta)
    {
        int pi = divide(vet, menor, alta);
        sort(vet, menor, pi - 1);
        sort(vet, pi + 1, alta);
    }
}

int main()
{
    int quant;
    scanf("%d", &quant);

    flush cards[quant];
    for (int i = 0; i < quant; ++i)
    {
        scanf(" %c", &cards[i].simb);

        switch (cards[i].simb)
        {
        case 'J':
            cards[i].prior = 10;
            break;
        case 'Q':
            cards[i].prior = 11;
            break;
        case 'R':
            cards[i].prior = 12;
            break;
        default:
            cards[i].prior = cards[i].simb - '0';
        }
    }

    sort(cards, 0, quant - 1);

    for (int i = 0; i < quant; ++i)
    {
        printf("%c ", cards[i].simb);
    }

    return 0;
}