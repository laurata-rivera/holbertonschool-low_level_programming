#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers in direction of 98 and stop
 * @n: Integer
 *
 * Returno: On success 1.
 * On error, -1 es returned, and errno is set appropiately
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n < 98)
		{
			n++;
		}
		else if (n > 98)
		{
			n--;
		}
	}
	printf("%i\n", 98);
}
