#include <stdio.h>

/**
 * main - print 50 fibonacci numbers
 * starting with 1 and 2.
 * Return: 0
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int c = a + b;
	int i;
	for (i = 1; i <= 50; i++)
	{
		a = b;
		b = c;
		c = a + b;
		
		if (i == 50)
		{
			printf("%d\n", c);
		}
		else
		{
			printf("%d, ", c);
		}
	}
	return (0);
}
