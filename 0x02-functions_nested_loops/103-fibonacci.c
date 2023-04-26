#include <stdio.h>

/**
 * main - print sum of fibonacci sequence
 * Return: 0
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c = a + b;
	long int limit = 4000000;
	int i;
	long int sum;

	for (i = 0; i <= limit; i++)
	{
		if (c % 2 == 0)
		{
			sum = sum + c;
		}
		else
		{
			continue;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
