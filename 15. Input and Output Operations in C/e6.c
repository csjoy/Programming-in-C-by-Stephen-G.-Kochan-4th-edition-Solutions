#include <stdio.h>
#define N 3

int main(void)
{
    FILE *in, *out;
    int n, i, j, y, c, count=0, flag=1;
    char str[200], x;

    if ((in=fopen("random.txt", "r"))==NULL)
        fprintf(stderr, "Can't open to read file.\n");
    else
    {
        while(fgets(str, 200, in))
        {
            if (str[0]=='\n')
                return 0;
            ++count;
            if (flag)
                puts(str);
            if (count==N)
            {
                fflush(stdin);
                scanf("%c", &x);

                if (x=='q')
                    break;
                else
                    count=0;
            }
        }
    }

    return 0;
}
