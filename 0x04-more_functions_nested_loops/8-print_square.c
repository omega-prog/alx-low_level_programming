#include "main.h"

/**
 * print_square- Function that prints a square.
 * @size: size of the square.
 */
void print_square(int size)
{
	int i, s;

	if (size <= 0)
		_putchar('\n);
	for (i = 0; i < size; i++)
	{
		for (s = 0; s < size; s++)
			_putchar('#');
		_putchar('\n');
	}
}
