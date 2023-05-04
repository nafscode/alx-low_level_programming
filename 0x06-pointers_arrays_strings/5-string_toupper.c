#include "main.h"
#include <string.h>

/**
 * string_toupper - A function that changes all lowercase letters of a string
 * to uppercase
 * @c: parameter
 * Return: char
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			return (c[i] - 'a' + 'A');
		}
	}
	return (c);
}
