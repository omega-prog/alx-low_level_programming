#include <stdio.h>
/**
 * main - Entry point
 *
 * Describtion: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int chr;

	for (chr = 0; chr < 8; chr++)
		putchar(str[chr]);
	putchar('\n');

	return (0);
}
