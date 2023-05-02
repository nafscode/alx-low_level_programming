#include "main.h"
#include <stdio.h>

/**
 * puts2 - A function that prints every other character of a string, starting
 * with the first character, followed by a new line.
 * @str: parameter
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int j;

	j = strlen(str);

	for (i = 0; i < j -1; i += 2)
	{
		if (str[i] == '\0')
		{
			break;
		}
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
