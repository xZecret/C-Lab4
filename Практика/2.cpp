#include <stdio.h>

int main()
{
    int a, c = 0;
    while ((a = getchar()) != 10)
    {
        if (c >= 2)
            return -1;
        if (a >= '0' && a <= '5')
            putchar(a + 3);
        else
            putchar('-');

        c++;
    }
    putchar('\n');
}