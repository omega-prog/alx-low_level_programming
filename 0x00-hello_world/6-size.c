#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
	{
		char c;
		int i;
		long int l;
		long long int ll;
		float f;

		printf("Size of a char: %lu bytes\n", (unsigned long)sizeof(c));
		printf("Size of an int: %lu bytes\n", (unsigned long)sizeof(i));
		printf("Size of a long int: %lu bytes\n", (unsigned long)sizeof(l));
		printf("Size of a long long int: %lu bytes\n", (unsigned long)sizeof(ll));
		printf("Size pf a float: %lu bytes\n", (unsigned long)sizeof(f));
		return (0);
	}
