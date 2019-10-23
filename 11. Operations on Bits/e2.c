#include <stdio.h>

int main(void)
{
    int x, y;

    scanf("%i", &x);

    y=x>>31;

    if (y==-1)
        printf("Arithmetic Right Shift\n");
    else
        printf("Logical Right Shift\n");

    return 0;
}
