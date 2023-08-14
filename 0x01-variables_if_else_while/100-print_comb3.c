#include <stdio.h>
/*
 * Main function returns combination of unique 2 digits.
 **/
int main(void)
{
    int i = 0;

    while (i++ < 89)
    {
        if (i / 10 != i % 10 && i / 10 < i % 10)
        {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');

            if (i == 89)
            break;

            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    /*
     * Return 0 if sucess.
     **/
    return (0);
}
