#include <stdio.h>

int int_size(void)
{
    unsigned int bits;
    int size=0;

    bits=~0;
    while (bits)
    {
        ++size;
        bits>>=1;
    }

    return size;
}

int main(void)
{
    int n, x;
    scanf("%i", &n);

    x=int_size();

    printf("%i", x);

    return 0;
}
