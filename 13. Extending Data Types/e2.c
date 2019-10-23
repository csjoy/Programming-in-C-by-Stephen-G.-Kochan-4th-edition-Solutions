#include <stdio.h>
#include <string.h>

char str[81];

enum month {January=1, February, March, April, May, June, July, August, September, October, November, December};

char *monthName(enum month m)
{
    switch(m)
    {
    case January:
        strcpy(str, "January");
        break;
    case February:
        strcpy(str, "February");
        break;
    case March:
        strcpy(str, "March");
        break;
    case April:
        strcpy(str, "April");
        break;
    case May:
        strcpy(str, "May");
        break;
    case June:
        strcpy(str, "June");
        break;
    case July:
        strcpy(str, "July");
        break;
    case August:
        strcpy(str, "August");
        break;
    case September:
        strcpy(str, "September");
        break;
    case October:
        strcpy(str, "October");
        break;
    case November:
        strcpy(str, "November");
        break;
    case December:
        strcpy(str, "December");
        break;
    default:
        strcpy(str, "\0");
        break;
    }

    return str;
}
int main(void)
{
    int *p;
    enum month m;
    m=June;

    printf("%s\n", monthName(m));

    return 0;
}
