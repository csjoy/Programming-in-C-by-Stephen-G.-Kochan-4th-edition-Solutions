#include <stdio.h>
#include "metric.h"
#include <limits.h>
#include <float.h>

int main(void)
{
    float liters, gallons;

    printf("*** Liters to Gallon ***\n\n");
    printf("Enter the number of liters: ");
    scanf("%f", &liters);

    gallons=liters *QUARTS_PER_LITER/4.0;
    printf("%g liters = %g gallons\n", liters, gallons);
    printf("%i\n", FLT_DIG);

    return 0;
}
