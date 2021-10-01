#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/**
	 * a: use ASCII, a lowercase is 95
	 * a != 101 is e
	 * a != 113 is q
	 */
	int a = 97;

	while (a < 123)
	{
		if ((a != 101) && (a != 113))
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
