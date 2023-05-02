#include <string.h>
#include "main.h"

/**
 * puts_half - A function that prints half of a string, followed by a new line.
 * @str: parameter
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;
	int n;

	n = strlen(str);
	if (n % 2 != 0)
	{
		k = (n - 1) / 2;
	}
	else
	{
		k = n / 2;
	}
	for (i = k; i <= n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
