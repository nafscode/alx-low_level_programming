#include "main.h"
#include <string.h>

/**
 * rev_string - A function that reverses a string.
 * @s: parameter
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;
	int j;
	char temp;

	j = strlen(s);
	for (i = 0; i < j - 1; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}

}
