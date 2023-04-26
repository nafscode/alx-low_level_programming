#include <stdio.h>

/**
 * main - print 50 fibonacci numbers
 * starting with 1 and 2.
 * Return: 0
 */

int main(void)
{
	int a, b, c, i, n;

	n = 50;

	a = b = 1;

	for (i = 1; i <= n-2; i++)
	{
		c = a + b;
		printf("%d, ", c);

		a = b;
		c = c;
	}
	return (0);
}
