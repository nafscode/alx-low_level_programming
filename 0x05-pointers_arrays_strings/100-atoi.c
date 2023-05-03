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
	int result;

	j = strlen(s);
	for (i = 0; i < j; i++)
	{
		if (s[i] >= 0 || s[i] <= 9)
		{
			result = _putchar(s[i] + '0');
		}
		else
		{
			result = _putchar(48);
		}
	}
	return (result);
}
