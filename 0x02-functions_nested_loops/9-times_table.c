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

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <=10; j++)
		{
			_putchar(i * j);
			_putchar(',');
			_putchar(' ');
		}
	}
}
