#include "main.h"

/**
 * print_sign - returns 1 if its greater than 0, 0 if its 0, and -1 if less.
 * Too prints the sign.
 * @n: integer number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
	int d;

	if (n == 0)
	{
		d = 0;
		_putchar(48);
	}
	else if (n > 0)
	{
		d = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		d = -1;
		_putchar('-');
	}
	return (d);
}
