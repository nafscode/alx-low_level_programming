#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse, followed by
 * a new line.
 * @s: parameter
 * Return: nothing
 */

void print_rev(char *s)
{
	int len;
	int j;
	int i;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
		j = len;
		for (i = s[j]; i >= s[0]; i--)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
