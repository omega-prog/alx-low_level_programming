#include <stdio.h>

/**
 * main- Entry point.
 * Return: 0 while success.
 */
int main(void)
{
	int i;
	long int a = 2;
	long int b = 4;
	long int temp;

	printf("%ld", a);
	for (i = 0; i < 3999999; i++)
	{
		printf("%ld", b);
		if (i < 3999998)
			printf(", ");
		else
			printf("\n");
		temp = a + b;
		a = b;
		b = temp;
	}
	return (0);
}
