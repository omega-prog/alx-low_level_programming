#include "main.h"

/**
 * _isupper- Check if the letter upper or lower case.
 * @c: the letter.
 * Return: 1 if Capital , 0 if small.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
