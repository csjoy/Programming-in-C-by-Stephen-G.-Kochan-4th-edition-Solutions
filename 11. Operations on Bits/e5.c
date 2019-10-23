#include <stdio.h>

int bit_test(unsigned int word, int n)
{
    if (n<0 || n>31)
        return 0;
    if ((word>>(31-n))&0x1)
        return 1;
    else
        return 0;
}

unsigned int bit_set(unsigned int word, int n)
{
    if (n<0 || n>31)
        return 0;
    return word|(1<<(31-n));
}

void main()

{
    int x=bit_test(0, 0);
    int yy=bit_set(0, 0);
}
