#include "main.h"

/**
 * print_square - prints '#' n times with space
 * @size: variable print '#' n times
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */

void print_square(int size)
{
	int l, s;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (s = 0; s < size; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
