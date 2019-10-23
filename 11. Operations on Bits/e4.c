#include <stdio.h>

int main(void)
{
    unsigned int w1=0xabcdef00u, w2=0xffff1122u;
    unsigned int rotate(unsigned int value, int n);

    printf("%x\n", rotate(w1, 8));
    printf("%x\n", rotate(w1, -16));
    printf("%x\n", rotate(w2, 4));
    printf("%x\n", rotate(w2, -2));
    printf("%x\n", rotate(w1, 0));
    printf("%x\n", rotate(w1, 44));

    return 0;
}

int int_size(int n)
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

unsigned int rotate(unsigned int value, int n)
{
    unsigned int result, bits;
    int x=int_size(value);

    if (n>0)
        n=n%x;
    else
    {
        n=-(-n%x);
    }

    if (n==0)
        result=value;
    else if (n>0)
    {
        bits=value>>x-n;
        result=value<<n|bits;
    }
    else
    {
        n=-1;
        bits=value<<x-n;
        result=value>>n|bits;
    }
}
