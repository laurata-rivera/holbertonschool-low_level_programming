#include "main.h"

/**
 * _isalpha - checks if c is a alphabetic character
 * @c: Input parameter in ASCII
 *
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropiately.
 */
int _isalpha(int c)
{
	int a;

	if (((c > 96) && (c < 123)) || ((c > 64) && (c < 91)))
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
