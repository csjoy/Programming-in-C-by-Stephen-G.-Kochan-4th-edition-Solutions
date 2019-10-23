#include <stdio.h>
#include <stdlib.h>

int compareStrings(char *s1, char *s2)
{
    while (*s1==*s2 && *s1!='\0' && *s2!='\0')
    {
        s1++;
        s2++;
    }

    if (*s1==*s2)
        return 0;
    else if (*s1<*s2)
        return -1;
    else
        return 1;
}

int main(void)
{
    char str1[]="stringt", str2[]="strings";
    int x=compareStrings(str1, str2);
    printf("%i\n", x);
    return 0;
}
