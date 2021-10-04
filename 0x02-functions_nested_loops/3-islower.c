#include "main.h"

/**
 * _islower - returns 1 is lowercase, 0 otherwise
 * @c: Input parameter in ASCII
 *
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropiately.
 */
int _islower(int c)
{
	int a;

	if ((c > 96) && (c < 123))
	{
		a = 1;

	}
	else
	{
		a = 0;
	}
	return (a);
}
