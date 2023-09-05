#include <stdio.h>

/**
 * main - Entry point.
 * Return: 0 while success.
 */
int main(void)
{
	int i;
	long int a = 0;
	long int b = 1;
	long  temp;

	printf("%ld", a);
	for (i = 0; i < 49; i++)
	{
		printf("%ld", b);
		if (i < 48)
			printf(", ");
		else
			printf("\n");
		temp = a + b;
		a = b;
		b = temp;
	}
	return (0);
}
