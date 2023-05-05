#include "main.h"

/**
 * _atoi - A function that convert a string to an integer.
 * @s: parameter
 * Return: int
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int digit = 0;
	

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = (digit * 10) + (*s - '0');
		}
		else if (digit > 0)
		{
			break;
		}
	}
	return (digit * sign);
}

