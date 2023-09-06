#include "main.h"

/**
 * print_diagonal- Prints diagonal line.
 * @n: Height of the diagonal line.
 */
void print_diagonal(int n)
{
	int i, s;

	for (i = 0; i < n; i++)
	{
		for (s = 0; s < i; s++)
			_putchar(' ');
		_putchar(92);
		_putchar(32);
	}
}
