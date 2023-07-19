#include <stdio.h>
#include "main.h"
/**
 * _islower - function that prints 10 times the alphabet, in lowercase
 * 
 * @c : check input of funtion
 *
 * Return: Returns 1 if c is lowercase
Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
