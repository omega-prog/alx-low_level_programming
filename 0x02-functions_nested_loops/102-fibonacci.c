#include <stdio.h>

/**
 * main - Entry point.
 * Return: 0 while success.
 */
int main(void)
{
	int i;
	long long int a = 0;
	long long int b = 1;
	long long temp;

	printf("%lld", a);
	for (i = 0; i < 49; i++)
	{
		printf("%lld", b);
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
