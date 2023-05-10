#include "main.h"

/**
 * _puts_recursion - A function that prints a string, followed by a new line.
 * @s: parameter
 */

void _puts_recursion(char *s)
{
	if ((*s >= 'a' || *s >= 'A') && (*s <= 'z' || *s <= 'Z'))
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
