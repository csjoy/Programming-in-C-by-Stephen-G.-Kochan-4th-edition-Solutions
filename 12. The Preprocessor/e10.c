#include <stdio.h>
#define printint(n) printf("%i\n", x ## n)

int main(void)
{
    int i;

    for (i=1; i<100; ++i)
        printint(i); //no

    return 0;
}
