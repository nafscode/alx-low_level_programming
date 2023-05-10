#include "main.h"

/**
 * _puts_recursion - A function that prints a string, followed by a new line.
 * @s: parameter
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		_putchar(*s +_puts_recursion(s + 1));
		i++;
		s++;
	}
	_putchar('\n');
}
