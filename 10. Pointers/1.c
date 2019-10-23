#include <stdio.h>
#include <stdlib.h>

struct entry
    {
        int value;
        struct entry *next;
    };

struct entry *first;

void insertEntry(int x)
{
    struct entry *newitem=(struct entry *)malloc(sizeof(struct entry));
    newitem->value=4;
    newitem->next=NULL;

    struct entry *t=first;

    while (t!=NULL)
    {
        if (t->value==x)
            break;
        t=t->next;
    }

    newitem->next=t->next;
    t->next=newitem;
}

int main(void)
{


    struct entry n1, n2, n3;
    n1.value=1;
    n1.next=&n2;
    n2.value=2;
    n2.next=&n3;
    n3.value=3;
    n3.next=NULL;

    first=&n1;

    insertEntry(n2.value);

    while(first!=NULL)
    {
        printf("%i ", first->value);
        first=first->next;
    }

    return 0;
}
