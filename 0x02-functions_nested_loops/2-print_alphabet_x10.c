#include "main.h"


/**
 * print_alphabet_x10 - Write 10 times the alphabet, in lowercase
 * void: no input parameter
 */

void print_alphabet_x10(void)
{
	int t;
	int a;

	for (t = 0; t < 10; t++)
	{
		for (a = 97; a < 123; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}
