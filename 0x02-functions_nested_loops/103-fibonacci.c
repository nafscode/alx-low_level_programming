#include <stdio.h>

/**
 * main - print sum of fibonacci sequence
 * Return: 0
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int limit = 4000000;
	int i;
	long int c;
	long int sum;

	for (i = 0; i <= limit; i++)
	{
		if (b % 2 == 0)
		{
			sum = sum + b;
			c = b;
			b = a;
			a = c;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
