#include "main.h"

/**
 * _puts_recursion - A function that prints a string, followed by a new line.
 * @s: parameter
 */

void _puts_recursion(char *s)
{
	if (((*s >= 'a' || *s >= 'A') && (*s <= 'z' || *s <= 'Z')) || (*s == ' ' || *s == ',' || *s == '.'))
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
