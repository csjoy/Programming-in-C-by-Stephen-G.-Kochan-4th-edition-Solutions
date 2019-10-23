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

int numberOfBits(unsigned int source)
{
    int count=0;
    unsigned int bits;
    bits=1<<(int_size()-1);

    while((bits|source)!=source)
    {
        ++count;
        bits>>=1;
    }

    return int_size()-count;
}

int bitpat_get(unsigned int source, int num, int bitc)
{
    int bits, x=num+bitc, y, res;
    bits=~bits;
    bits<<=bitc;
    bits=~bits;
    y=numberOfBits(source)-x;
    source>>=y;
    res=source&bits;

    return res;
}

int main(void)
{
    int index=bitpat_get(0xe1f4, 0, 3);
    printf("%i\n", index);

    return 0;
}
