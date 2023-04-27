#include <stdio.h>

/**
 * main - A program that finds and print the largest prime factor of the
 * number 612852475143, followed by a new line.
 * Return: 0
 */

int main(void)
{
	long int n;

	n = 612852475143;

	long int d = 2, ans = 0, max;

	while (n != 0)
	{
		if (n % d != 0)
		{
			d = d + 1;
		}
		else
		{
			max = n;
			n = n / d;
			if (n == 1)
			{
				printf("%ld\n", max);
				ans = 1;
				break;
			}
		}
	}
	return (0);
}
