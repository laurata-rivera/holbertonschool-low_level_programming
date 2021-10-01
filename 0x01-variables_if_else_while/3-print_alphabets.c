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
	 * n: use ASCII, a lowercase is 97
	 * m: use ASCII, A upcase is 65
	 */
	int n = 97;
	int m = 65;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	while (m < 91)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
