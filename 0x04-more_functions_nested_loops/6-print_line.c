#include "main.h"

/**
 * print_line - prints a line
 * @n: print '_' n times
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */

void print_line(int n)
{
	int l;

	l = 0;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
