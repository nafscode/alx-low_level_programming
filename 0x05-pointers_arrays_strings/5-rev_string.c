#include "main.h"
#include <string.h>

/**
 * rev_string - A function that reverses a string.
 * @s: parameter
 * Return: nothing
 */

void rev_string(char *s)
{
	int len;
	int i;
	int j;

	len = strlen(s);
	for (j = 0; s[j] != '\0'; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
