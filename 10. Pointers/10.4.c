#include <stdio.h>

int main(void)
{
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today, *datepointer;

    datepointer=&today;

    datepointer->month=2;
    datepointer->day=7;
    datepointer->year=1997;

    printf("Today's date is %i/%i/%.2i.\n", datepointer->day, datepointer->month, datepointer->year%100);

    return 0;
}
