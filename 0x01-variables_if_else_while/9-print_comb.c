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
	 * n: use ASCII, 48 is number 0
	 * 57 is number 9
	 * 44 is '
	 * 32 is space
	 */
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
