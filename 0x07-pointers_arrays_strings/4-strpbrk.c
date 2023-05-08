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
		while (*t != '\0')
		{
			if (*s == *accept)
			{
				t = &s;
				return (p);
			}
			t++;
		}
		s++;
	}
	return (NULL);
}
