#include "main.h"
/**
 *print_to_98 - print n to 98 counts
 *
 *main - Lists all the natural numbers below 1024 (excluded)
 *that are multiples of 3 or 5.
 *
 *@n : input
 *Return: Always 0.
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count)
			printf("%d, ", count);
	printf("98\n");
}
