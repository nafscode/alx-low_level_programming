#include "main.h"
#include <string.h>

/**
 * _strncpy - A function that copies a string.
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len;

	len = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
