#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: string
 * @accept: character
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
