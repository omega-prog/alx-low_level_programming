#include "main.h"

/**
 * _isdigit- Check if the char is number or not.
 * @c: Character to be checked.
 * Return: 1 if number, 0 if not.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
