#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * Return: 1 if c is a digit; 0 otherwise
 * @c: ASCII code
 */

int _isdigit(int c)
{
	int a;

	if ((c >= 48) && (c <= 57))
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
