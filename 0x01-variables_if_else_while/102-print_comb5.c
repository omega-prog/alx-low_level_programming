#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, k;

	for (i = 0; i <= 98; i++)
	{
	for (k = i + 1; k <= 99; k++)
	{
		putchar (i / 10 + '0');
		putchar (i % 10 + '0');
		putchar (' ');
		putchar (k / 10 + '0');
		putchar (k % 10 + '0');
		if (i != 98 || k != 99)
		{
			putchar (',');
			putchar (' ');
		}
	}
	}
	putchar ('\n');
	return (0);
}
