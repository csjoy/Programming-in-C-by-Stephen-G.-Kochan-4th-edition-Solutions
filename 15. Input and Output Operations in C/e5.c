#include <stdio.h>

int main(void)
{
    FILE *in, *out;
    int c, m, n, i, j, x=0;

    if ((in=fopen("here.txt", "r"))==NULL)
        fprintf(stderr, "Can't open data for reading.\n");
    else
    {
        scanf("%i %i", &m, &n);
        out=fopen("stdout.txt", "w");

        while (1)
        {
            c=getc(in);
            ++x;
            if (c==EOF)
                break;
            if (c=='\n')
            {
                x=0;
                putc(c,out);
            }
            if (x>=m && x<=n)
                putc(c, out);
        }

        fclose(in);
        fclose(out);

        printf("File has been copied.\n");
    }

    return 0;
}
