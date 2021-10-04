#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase using _putchar
 * void: no input parameter
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
	/**
	 * i: use ASCII, a is 97
	 */
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
