#include <stdio.h>

int arraySum(int *array, const int n)
{
    int sum=0, *ptr=array, i;
    int * const arrayEnd=array+n;

    for (i=0; i<n; ++i)
        sum+=*(ptr+i);

    return sum;
}

int main(void)
{
    int arraySum(int array[], const int n);
    int values[10]={3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i\n", arraySum(values, 10));

    return 0;
}
