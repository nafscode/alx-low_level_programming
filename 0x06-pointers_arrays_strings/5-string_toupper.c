#include "main.h"
#include <string.h>

/**
 * string_toupper - A function that changes all lowercase letters of a string
 * to uppercase
 * Return: char
 */

char *string_toupper(char *c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - 'a' + 'A';
	}
	else
	{
		return c;
	}
}
