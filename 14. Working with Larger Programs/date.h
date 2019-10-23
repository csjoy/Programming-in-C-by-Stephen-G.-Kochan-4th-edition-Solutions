#include <stdbool.h>

enum Month {January=1, February, March, April, May, June, July, August, September, October, November, December};
enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

struct date
{
    enum Month month;
    enum Day day;
    int year;
};

typedef struct date Date;

Date dateUpdate(Date today);
int numberOfDays(Date d);
bool isLeapYear(Date d);

#define setDate(s,mm,dd,yy) s=(Date){mm, dd, yy}

extern Date todaysDate;

bool isLeapYear(Date d)
{
    bool leapYearFlag;

    if ((d.year%4==0 && d.year%100!=0) || d.year%400==0)
        leapYearFlag=true;
    else
        leapYearFlag=false;

    return leapYearFlag;
}

int numberOfDays(Date d)
{
    int days;
    const int daysPerMonth[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((isLeapYear(d)==true) && d.month==2)
        days=29;
    else
        days=daysPerMonth[d.month-1];

    return days;
}

Date dateUpdate(Date today)
{
    Date tomorrow;

    if (today.day!=numberOfDays(today))
        setDate(tomorrow, today.month, today.day+1, today.year);
    else if (today.month==December)
        setDate(tomorrow, January, 1, today.year+1);
    else
        setDate(tomorrow, today.month+1, 1, today.year);

    return tomorrow;
}
