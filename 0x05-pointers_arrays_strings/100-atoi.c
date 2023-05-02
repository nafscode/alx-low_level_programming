#include "main.h"
#include <string.h>

/**
 * _atoi - A function that convert a string to an integer.
 * @s: parameter
 * Return: an int
 */

int _atoi(char *s)
{
	int i;
	int j;

	j = strlen(s);
	for (i = 0; i < j; i++)
	{
		if (s[i] >= 0 || s[i] <= 9)
		{
			_putchar(s[i] + '0');
		}
		else
		{
			return (0);
		}
	}
}
