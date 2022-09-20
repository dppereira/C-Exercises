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
        printf("[%d] -> ", b->num);
        b = b->next;
    } while (b);
    printf("[NULL]");
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

int main(void)
{
    list *base = creat_list();
    int elem, numero;

    //printf("Numero de elementos na lista encadeada");
    scanf("%d", &elem);

    for (int i = 0; i < elem; i++)
    {
        //printf("Valor do elemento");
        (scanf("%d", &numero));

        insert_beg(base, creat_item(numero));
        
    }
    
    print(base);

    return 0;
}