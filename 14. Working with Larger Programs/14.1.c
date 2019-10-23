#include "date.h"
#include <stdio.h>

int main(void)
{
    Date d, tomorrow;
    d.month=2;
    d.day=28;
    d.year=2017;

    tomorrow=dateUpdate(d);

    printf("%i/%i/%i\n", tomorrow.day, tomorrow.month, tomorrow.year);

    return 0;
}
