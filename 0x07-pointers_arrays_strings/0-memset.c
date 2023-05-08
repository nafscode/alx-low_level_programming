#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: pointer
 * @b: value to copy
 * @n: size of value
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = *s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}

