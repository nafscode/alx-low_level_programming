#include "main.h"

/**
 * print_times_table - A function that prints
 * the n times table, starting with 0.
 * @n: parameter
 * Return: 0
 */

void print_times_table(int n)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (n > 15 || n < 0)
				break;
			if (k > 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k / 100 + '0');
				_putchar((k / 10 % 10) + '0');
				_putchar(k % 10 + '0');
			}
			else if (k > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else if (k >=10 || k != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar(k + '0');
			}
		}
		_putchar('\n');

	}
}
