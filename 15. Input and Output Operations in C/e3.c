#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char inname[64], outname[64];
    FILE *in, *out;
    int c;

    printf("Enter name of file to be copied: ");
    scanf("%63s", inname);
    printf("Enter name of output file: ");
    scanf("%63s", outname);

    if ((in=fopen(inname, "r"))==NULL)
    {
        printf("Can't open %s for reading.\n", inname);
        return 1;
    }

    if ((out=fopen(outname, "w"))==NULL)
    {
        printf("Can't open %s for writing\n", outname);
        return 2;
    }

    while ((c=getc(in))!=EOF)
    {
        if (c>='A' && c<='Z')
            c=c-'A'+'a';
        putc(c, out);
    }

    if (feof(in))
    {
        printf("Ran out of data.\n");
    }

    fclose(in);
    fclose(out);

    printf("File has been copied.\n");

    return 0;
}

