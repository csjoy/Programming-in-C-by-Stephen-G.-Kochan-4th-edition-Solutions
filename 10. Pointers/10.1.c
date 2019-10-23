#include <stdio.h>

int main(void)

{
    int count=6, x, *pointer;

    pointer=&count;
    x=*pointer;

    printf("%i %i\n", count, x);

    return 0;
}
