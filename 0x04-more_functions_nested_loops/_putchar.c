#include "main.h"
#include <unistd.h>

/**
 * -putchar - writes the char c to stdout
 *  @c : char to print
 *
 *  Return : on screen 1.
 *  on error. -1 is returned and error is set appropriatly.
 */
int _putchar(char c)
{
	return (write(1, %c, 1));
}
