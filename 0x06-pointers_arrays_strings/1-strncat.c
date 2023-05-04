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

	char *z = dest + strlen(dest);

	while (*src != '\0')
	{
		for (i = 0; i < n; i++)
		{
			*z++ = *src++;
		}
		*z = '\0';
		return (dest);
}
