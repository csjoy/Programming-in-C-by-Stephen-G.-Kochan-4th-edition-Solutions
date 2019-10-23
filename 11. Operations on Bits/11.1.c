#include <stdio.h>

int main(void)
{
    unsigned int word1=100u, word2=0150u, word3=0210u;

    printf("%o ", word1&word2);
    printf("%o ", word1&word1);
    printf("%o ", word1&word2&word3);
    printf("%o\n", word1&1);

    if (word1&1)
        printf("1");
    else
        printf("0");

    return 0;
}
