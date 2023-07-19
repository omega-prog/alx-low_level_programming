#include <stdio.h>
/**
 * Describtion: print_alphabet - utilizes on the putchar function to print
 * the alphabet a-z
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
