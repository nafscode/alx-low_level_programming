#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse, followed by
 * a new line.
 * @s: parameter
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;
	
	for (i = s[i]; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
