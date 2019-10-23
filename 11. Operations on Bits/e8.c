#include <stdio.h>

int int_size(void)
{
    unsigned int bits;
    int count=0;
    bits=~0;
    while (bits)
    {
        ++count;
        bits>>=1;
    }

    return count;
}

int numberOfBits(int source)
{
    unsigned int bits;
    int count=0;
    bits=1<<int_size()-1;
    while((bits|source)!=source)
    {
        ++count;
        bits>>=1;
    }

    return int_size()-count;
}

int bitpat_get(unsigned int source, int num, int bitc)
{
    unsigned int bits, x=num+bitc, y, res;

    bits=~bits;
    bits<<=bitc;
    bits=~bits;
    y=numberOfBits(source)-x;
    source>>=y;
    res=source&bits;

    return res;
}

int bitpat_set(unsigned int *source, int pattern, int num, int bitc)
{
    unsigned int temp, bits, x, y=num+bitc, z=0, left, leftc, res;

    x=numberOfBits(*source);
    left=bitpat_get(*source, 0, num);
    leftc=numberOfBits(left);
    left<<=x-leftc;
    bits=~0;
    bits<<=x-y;
    bits=~bits;
    temp=*source;
    temp=temp&bits;
    pattern<<=x-y;
    temp=temp|pattern;
    res=left|temp;

    return res;
}

int main(void)
{
    int index, x=57844;
    index=bitpat_set(&x, 0x55u, 0, 8);
    printf("%i\n", index);

    return 0;
}
