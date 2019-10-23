#include <stdio.h>
#define MIN(a, b) ((a)<(b))?(a):(b)

int main(void)
{
    int a, b;
    scanf("%i %i", &a, &b);
    printf("%i\n", MIN(a, b));

    return 0;
}
