#include <stdio.h>
#include <stdlib.h>

void test(int *intpointer)
{
    *intpointer=100;
}

int main(void)
{
    int i=50, *p=&i;

    printf("Before the call to test i = %i\n", i);

    test(p);

    printf("After the call to test i=%i\n", i);

    return 0;
}
