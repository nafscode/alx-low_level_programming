#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string.
 * @src: input string
 * Return: string
 */

char *cap_string(char *str)
{
	int i;
	int j;

	int cap = 1;
	char sep[] = ",;.!?(){}\n\t\" ";
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == sep[i])
		{
			cap = 1;
		}
		else if (cap)
		{
			str[i] = (str[i] - 32);
			cap = 0;
		}
	}
	return (str);
}
