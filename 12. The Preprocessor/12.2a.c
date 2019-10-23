#include <stdio.h>
#define INT_SIZE 32 // *** machine dependent

unsigned int rotate(unsigned int value, int n)
{
    unsigned int result, bits;

    if (n>0)
        n=n%INT_SIZE;
    else
        n=-(-n%INT_SIZE);

    if (n==0)
        result=value;
    else if (n>0)
    {
        bits=value>>(INT_SIZE-n);
        result=value<<n|bits;
    }
    else
    {
        n=-n;
        bits=value<<(INT_SIZE-n);
        result=value>>n|bits;
    }

    return result;
}

int main(void)
{
    unsigned int w1=0xabcdef00u, w2=0xffff1122u, x, y;
    unsigned int rotate(unsigned int value, int n);

    printf("%x\n", rotate(w1, 8));
    printf("%x\n", rotate(w1, -16));
    printf("%x\n", rotate(w2, 4));
    printf("%x\n", rotate(w2, -2));
    printf("%x\n", rotate(w1, 0));
    printf("%x\n", rotate(w1, 44));

    return 0;
}
