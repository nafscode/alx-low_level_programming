#include "main.h"

/**
 * _strspn - A function that gets the lenght of a prefix substring.
 * @s: string
 * @accept: prefix
 * Return: lenght
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p;

	while (*s != '\0')
	{
		p = accept;

		while (*p != '\0)
		{
			if (*s == *p)
			{
				len++;
				break;
			}
		}
		if (*p == '\0')
		{
			break;
		}
		s++;
	}
	return len;
}
