#include "main.h"
/**
 * print_to_98 - A function that prints all natural numbers
 * from n to 98, followed by a new line.
 * @n: parameter
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			_putchar(n);

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				break;
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			_putchar(n);

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				break;
			}
		}
	}
	_putchar('\n');
}
	
