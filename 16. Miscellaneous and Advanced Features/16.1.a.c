#include <stdio.h>
#include <stdlib.h>

struct entry
{
    int value;
    struct entry *next;
};

struct entry *addEntry(struct entry *listPtr)
{
    while (listPtr->next!=NULL)
        listPtr=listPtr->next;

    listPtr->next = (struct entry *)malloc (sizeof(struct entry));

    if (listPtr->next != NULL)
        listPtr->next->next = (struct entry *) NULL;

    return listPtr->next;
};

int main()
{

}
