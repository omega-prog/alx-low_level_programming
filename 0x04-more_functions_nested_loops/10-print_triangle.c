#include "main.h"

/**
 * print_triangle- Print triangle.
 * @size: size of the triangle.
 */
void print_triangle(int size)
{
	int i, x, z;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (x = size - i; x > 0; x--)
				_putchar(' ');
			for (z = 0; z < i; z++)
				_putchar('#');
		_putchar('\n');
		}
	}
}

