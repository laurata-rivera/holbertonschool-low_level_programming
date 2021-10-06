#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * void: No return
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int r, c, n;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			n = r * c;
			if (n > 9)
			{
				if (c != 0)
				{
					_putchar(44);
					_putchar(32);
				}
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
			else
			{
				if (c != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar('0' + n);
			}
		}
		_putchar('\n');
	}
}
