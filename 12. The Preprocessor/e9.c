#include <stdio.h>
#define ABSOLUTE_VALUE(x) ((x)<0)?-(x):(x)

int main(void)
{
    int a=-5, delta=2, x;

    x=ABSOLUTE_VALUE(a+delta);
    printf("%i\n", x);

    return 0;
}
