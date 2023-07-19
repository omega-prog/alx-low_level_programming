#include <stdio.h>
/**
 * Describtion: print_alphabet - utilizes on the putchar function to print
 * the alphabet a-z
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 0; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
