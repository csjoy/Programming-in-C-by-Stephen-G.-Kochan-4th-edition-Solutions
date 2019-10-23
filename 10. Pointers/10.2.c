#include <stdio.h>

int main(void)

{
    char c='Q';
    char *charpointer=&c;

    printf("%c %c\n", c, *charpointer);

    c='\\';

    printf("%c %c\n", c, *charpointer);

    *charpointer='(';

    printf("%c %c\n", c, *charpointer);

    return 0;
}
