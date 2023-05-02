#include "main.h"

/**
 * puts2 - A function that prints every other character of a string, starting
 * with the first character, followed by a new line.
 * @str: parameter
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i += 2;
	}
	_putchar('\n');
}
