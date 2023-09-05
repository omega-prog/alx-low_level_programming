#include <stdio.h>

/**
 * main - Entry point the prints the sum of all natural numbers
 * that are devisible by 3 and 5.
 * Return: 0 while success.
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		sum += i;
	}
	printf("The sum is %d\n", sum);
	return (0);
}
