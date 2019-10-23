#include <stdio.h>
#define MAX3(a, b, c) (a>b)?(a>c)?a:c:(b>c)?b:c

int main(void)
{
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    printf("%i\n", MAX3(a, b, c));

    return 0;
}

