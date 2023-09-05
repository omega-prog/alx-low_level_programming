#include <stdio.h>

/**
 * main- Entry point.
 * Return: 0 while success.
 */
int main(void)
{
	unsigned long int a = 1, b = 2, temp;
	int i;

	printf("%lu, ", a);
	for (i = 0; i < 97; i++)
	{
		printf("%lu", b);
		if (i < 96)
			printf(", ");
		else
			printf("\n");
		temp = a + b;
		a = b;
		b = temp;
	}
	return (0);
}
