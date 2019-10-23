#include <stdio.h>

int howmany(void)
{
    return 2;
}

typedef int (*FunctionPtr)(void);

int main(void)
{
    FunctionPtr func;
    func=howmany;

    printf("This many: %i\n", func());

    return 0;
}
