#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * Return: 1 if c is uppercase; 0 otherwise
 * @c: ASCII code
 */

int _isupper(int c)
{
	int a;

	if ((c >= 65) && (c <= 90))
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
