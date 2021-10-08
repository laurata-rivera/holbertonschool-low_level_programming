#include "main.h"

/**
 * more_numbers - print number from 0 to 14, ten times
 * void: ni input parameter
 *
 * Return: 0 success 1
 * On error -1 is returned, and errno is set appropiately
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}

		_putchar('\n');
	}
}