#include <stdio.h>
/**
 * main - Entry point
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print(void)
{
	printf("_putchar\n");
}
int main(void)
{
	print();
	return (0);
}
