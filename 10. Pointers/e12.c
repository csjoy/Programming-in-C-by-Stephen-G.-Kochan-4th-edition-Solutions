#include <stdio.h>

int main(void)
{
    char *message="Programming in C is fun\n";
    char message2[]="Your said it\n";
    char *format="x = %i\n";
    int x=100;

    printf(format, x);
}
