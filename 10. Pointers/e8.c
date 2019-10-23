#include <stdio.h>

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void sort3(int *a, int *b, int *c)
{
    if (*a>*b)
        swap(a, b);
    if (*a>*c)
        swap(a, c);
    if (*b>*c)
        swap(b, c);
}

int main(void)
{
    int a, b, c, n;
    scanf("%i %i %i", &a, &b, &c);

    sort3(&a, &b, &c);
    printf("a = %i\nb = %i\nc = %i", a, b, c);

    return 0;
}
