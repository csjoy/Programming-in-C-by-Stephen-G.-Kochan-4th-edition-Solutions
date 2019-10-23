#include <stdio.h>
#include <stdlib.h>

void readline(char *line)
{
    char c='0';
    int i=0;

    while (c!='\n')
    {
        c=getchar();
        *line=c;
        line++;
    }
    line--;
    *line='\0';
}

int main(void)
{
    char *line=(char *)malloc(sizeof(line)*81);
    int i, j;

    for (i=0; i<3; ++i)
    {
        readline(line);
        printf("%s\n", line);
    }

    return 0;
}

