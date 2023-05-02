#include "main.h"
#include <string.h>

/**
 * rev_string - A function that reverses a string.
 * @s: parameter
 * Return: nothing
 */

void rev_string(char *s)
{
	int len;
	int i;
	int j;
	char *rev;

	len = strlen(s);
	j = len - 1;

	for (i = 0; i < len; i++)
	{
		rev[i] = s[j];
		j--;
	}
	_putchar(rev);
}
