#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char iu='A', il='8', id='8';

    printf("%i %i %i\n", isupper(iu), isalpha(il), isdigit(id));

    return 0;
}
