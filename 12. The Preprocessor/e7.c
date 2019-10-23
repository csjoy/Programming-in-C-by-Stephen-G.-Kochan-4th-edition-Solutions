#include <stdio.h>
#define IS_UPPER_CASE(x) x>='A' && x<='Z'
#define IS_LOWER_CASE(x) x>='a' && x<='z'
#define IS_ALPHABETIC(x) IS_LOWER_CASE(x) || IS_UPPER_CASE(x)

int main(void)
{
    char ch='a';
    int x=IS_ALPHABETIC(ch);
    printf("%i\n", x);

    return 0;
}
