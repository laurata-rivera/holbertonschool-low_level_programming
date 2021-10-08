#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * void: No Input parameter
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropiatly
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n != 50) && (n != 52))
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
