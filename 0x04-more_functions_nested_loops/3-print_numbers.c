#include "main.h"

/**
 * print_numbers - A function that prints the numbers, from 0 to 9,
 * followed byy a new line.
 * Return: 0
 */

void print_numbers(void)
{
	int i;
	
	for (i = 48; i <= 57; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
