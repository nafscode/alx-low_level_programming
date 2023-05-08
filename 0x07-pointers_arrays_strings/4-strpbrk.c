#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: string
 * @accept: character
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *t;

	while (*s != '\0')
	{
		t = accept;

		while (*t != '\0')
		{
			if (*s == t)
			{
				return (*(s));
			}
			t++;
		}
		s++;
	}
	return (NULL);
}
