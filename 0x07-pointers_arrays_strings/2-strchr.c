#include "main.h"

/**
 * _strchr - A function that locaates a character in a string.
 * @s: string
 * @c: character
 * Return: character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return NULL;
}
