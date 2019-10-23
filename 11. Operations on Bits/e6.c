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

int numberOfBits(unsigned int source)
{
    unsigned int bits;
    int count=0;
    bits=1<<(int_size()-1);

    while((source|bits)!=source)
    {
        bits>>=1;
        ++count;
    }

    return int_size()-count;
}

int right_most(int pattern, int n)
{
    int temp, rightmost;
    temp=~0;
    temp<<=n;
    temp=~temp;
    rightmost=pattern&temp;

    return rightmost;
}

int bitpat_search(unsigned int source, unsigned pattern, int n)
{
    int rightmost, sourcebits, index, res;

    rightmost=right_most(pattern, n);
    sourcebits=numberOfBits(source);
    index=(sourcebits-n);
    res=-1;

    while (index>=0)
    {
        if ((right_most(source, n)^rightmost)==0)
            res=index;
        source>>=1;
        --index;
    }

    return res;
}

int main(void)
{
    int index=bitpat_search(0xe1f4, 0x5, 3);
    printf("%i\n", index);

    return 0;
}
