#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: string
 * @accept: character
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	char *p;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; i++)
		{
			if (*(s + i) == *(accept + j))
			{
				p = (&s + i);
				return (p);
			}
		}
	}
	return ('\0');
}
