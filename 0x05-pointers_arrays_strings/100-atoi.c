#include "main.h"
#include <string.h"

/**
 * _atoi - A function that convert a string to an integer.
 * @s: parameter
 * Return: int
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int digit = 0;
	int i;
	n = strlen(s);

	for (i = 0; i < n -1; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] == '-' || s[i] == '+')
		{
			i++;
			continue;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = digit * 10 + (s[i] - '0');
		}
		else if (digit > 0)
		{
			break;
		}
	}
	return (digit * sign);
}
