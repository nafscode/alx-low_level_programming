#include "main.h"

/**
 * times_table - A function that prints the 9
 * times table, staring with 0.
 * Return: 0
 */

void times_table(void)
{
	int n = 9;
	int i;
	int j;
	int k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			k = i * j;
			
			if (k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
	}
}
