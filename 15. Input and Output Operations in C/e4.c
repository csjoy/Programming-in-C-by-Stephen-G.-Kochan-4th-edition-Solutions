#include <stdio.h>

int main(void)
{
    FILE *in, *out, *output;
    int c;

    if ((in=fopen("data.txt", "r"))==NULL)
    {
        printf("Can't open for reading\n");
        return 1;
    }

    if ((out=fopen("here.txt", "r"))==NULL)
    {
        printf("Can't open for reading\n");
        return 2;
    }

    output=fopen("new.txt", "w");

    while ((c=getc(in))!=EOF)
    {
        putc(c, output);
    }
    while ((c=getc(out))!=EOF)
    {
        putc(c, output);
    }

    fclose(in);
    fclose(out);
    fclose(output);

    printf("File has been copied.\n");

    return 0;
}
