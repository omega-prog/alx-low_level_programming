#include "main.h"
#include <stdio.h>

/**
 * main- Entry point.
 * fezzbuzz- Prints numbers wiht FezzBuzz.
 * Return: 0 while success.
 */

int main(void)
{
	fezzbuzz();
	return (0);
}

void fezzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf("FezzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
}
