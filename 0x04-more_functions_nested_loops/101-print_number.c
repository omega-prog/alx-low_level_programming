#include "main.h"

/**
 * print_number- Prints int.
 * @n: number.
 */
void print_number(int n)
{
int temp = 0;

if (n == 0)
{
_putchar('0');
return;
}
else if (n < 0)
{
n = -n;
_putchar('-');
}
while (n)
{
temp = (temp * 10) + (n % 10);
n /= 10;
}
while (temp)
{
_putchar('0' + temp % 10);
temp /= 10;
}
}
