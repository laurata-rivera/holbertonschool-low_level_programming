#include "main.h"

/**
 * print_diagonal - prints '\' n times with space
 * @n: variable print '\' n times
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */

void print_diagonal(int n)
{
	int l, d;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (d = 0; d < l; d++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
