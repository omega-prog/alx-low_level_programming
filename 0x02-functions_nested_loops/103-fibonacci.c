#include <stdio.h>

/**
 * main- Entry point.
 * Return: 0 while success.
 */
int main(void)
{
	int i;
	long int a = 1;
	long int b = 2;
	long int temp;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
			sum += b;
		temp = a + b;
		a = b;
		b = temp;
	}
	printf("%ld", sum);
	return (0);
}
