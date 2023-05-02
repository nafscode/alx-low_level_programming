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

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
