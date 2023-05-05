#include "main.h"

/**
 * _atoi - A function that convert a string to an integer.
 * @s: parameter
 * Return: int
 */

int _atoi(char *s)
{
	int sign = 1;
	int digit = 0;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	if (s[0] == '+')
	{
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = digit * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}
	digit = digit * sign;

	return (digit);
}
