#include <stdio.j>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
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
	return (0);
}
