#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

typedef struct item item;
typedef struct lista list;

struct item
{
    int num;
    item *next;
};

struct lista
{
    item *first;
    item *last;
    item *current;
};

list *creat_list()
{
    list *new = malloc(sizeof(list));
    assert(new);

    new->first = NULL;
    new->last = NULL;
    new->current = NULL;

    return new;
}

item *creat_item(int numero)
{
    item *new = malloc(sizeof(item));
    assert(new);

    new->num = numero;
    new->next = NULL;

    return new;
}

void insert_beg(list *l, item *i)
{
    i->next = l->first;
    l->first = i;
    l->current = i;
}

int size(list *l)
{
    int count = 0;

    item *aux = l->first;

    while (aux)
    {
        count++;
        aux = aux->next;
    }

    return count;
}

bool beg(list *l, item **i)
{
    l->current = l->first;
    *i = l->current;
    return true;
}

bool end(list *l, item **i)
{
    l->current = l->last;
    *i = l->current;

    return true;
}

bool next(list *l, item **i)
{
    l->current = l->current->next;
    *i = l->current;

    return true;
}

void print(list *l)
{
    item *b = l->first;

    do
    {
        printf("%d ", b->num);
        b = b->next;
    } while (b);
}

bool empty(list *l)
{
    return l->first == NULL;
}

void destroy(list **l)
{
    item *temp;

    if (!empty(*l))
    {
        item *aux = (*l)->first;

        while (aux)
        {
            temp = aux;
            aux = aux->next;
            free(temp);
        }
    }

    free(l);
    l = NULL;
}

bool igualdade(list *l, list *q)
{

    item *aux = l->first;
    item *aux2 = q->first;

    while (aux != NULL && aux2 != NULL)
    {
        if (aux->num != aux2->num)
        {
            return false;
        }

        aux = aux->next;
        aux2 = aux2->next;
    }

    return aux == NULL && aux2 == NULL;
}

int main(void)
{
    list *base = creat_list();
    list *base_esp = creat_list();
    int numero;

    do
    {
        // printf("Insira os valores inteiros desejados");
        (scanf("%d", &numero));

        if (numero != 0)
        {
            insert_beg(base, creat_item(numero));
        }

    } while (numero != 0);

    do
    {
        // printf("Insira os valores inteiros desejados");
        (scanf("%d", &numero));

        if (numero != 0)
        {
            insert_beg(base_esp, creat_item(numero));
        }

    } while (numero != 0);

    if (igualdade(base, base_esp))
    {
        printf("S");
    }
    else
        printf("N");

    return 0;
}