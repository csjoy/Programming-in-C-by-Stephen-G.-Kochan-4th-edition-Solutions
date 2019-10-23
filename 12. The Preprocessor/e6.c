#include <stdio.h>
#define IS_UPPER_CASE(x) x>='A' && x<='Z'

int main(void)
{
    char ch='Q';
    int x=IS_UPPER_CASE(ch);
    printf("%i\n", x);

    return 0;
}
