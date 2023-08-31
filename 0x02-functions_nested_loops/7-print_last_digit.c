#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit which is x.
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	_putchar('\n');

	return (x);
}
