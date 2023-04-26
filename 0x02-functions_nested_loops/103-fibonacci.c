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
	long int c;
	int sum;
	int i;

	for (i = 3; i <= limit; i++)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			sum = sum + c;
		}
		a = b;
		b = c;
	}
	printf("%d\n", sum);
	return (0);
}
