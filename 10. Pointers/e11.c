#include <stdio.h>
#include <stdbool.h>

struct date
{
    int day;
    int month;
    int year;
};

bool isLeapYear(struct date *d)
{
    bool leapYearFlag;

    if ((d->year%4==0 && d->year%100!=0) || d->year%400==0)
        leapYearFlag=true;
    else
        leapYearFlag=false;

    return leapYearFlag;
}

int numberofdays(struct date *d)
{
    int days;
    int daysPerMonth[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(d) && d->month==2)
        days=29;
    else
        days=daysPerMonth[d->month-1];

    return days;
}

struct date dateupdate(struct date *today)
{
    struct date tomorrow;

    if (today->day!=numberofdays(today))
    {
        tomorrow.day=today->day+1;
        tomorrow.month=today->month;
        tomorrow.year=today->year;
    }
    else if (today->month==12)
    {
        tomorrow.day=1;
        tomorrow.month=1;
        tomorrow.year=today->year+1;
    }
    else
    {
        tomorrow.day=1;
        tomorrow.month=today->month+1;
        tomorrow.year=today->year;
    }

    return tomorrow;
};

int main(void)
{
    struct date thisday, nextday;

    printf("Enter today's date (mm/dd/yyyy): ");
    scanf("%i/%i/%i", &thisday.month, &thisday.day, &thisday.year);

    nextday=dateupdate(&thisday);

    printf("Tomorrow's date is %i/%i/%i.\n", nextday.month, nextday.day, nextday.year);

    return 0;
}
