#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 <Success>
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);

	for (n = 'a'; n <= 'f'; n++)
		putchar(n);

	putchar(10);
	return (0);
}
