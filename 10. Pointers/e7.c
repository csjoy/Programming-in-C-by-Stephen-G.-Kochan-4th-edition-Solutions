#include <stdio.h>

void sort(int *a, int *n)
{
    int temp, *arrayEnd=a+*n, *p;

    for (; a<n; ++a)
    {
        for (p=a+1; p<arrayEnd; ++p)
        {
            if (*p<*a)
            {
                temp=*a;
                *a=*p;
                *p=temp;
            }
        }
    }
}

int main(void)
{
    int i, n;
    scanf("%i", &n);
    int arr[n];

    for (i=0; i<n; ++i)
        scanf("%i", &arr[i]);

    sort(arr, &n);

    for (i=0; i<n; ++i)
        printf("%i ", arr[i]);

    return 0;
}
