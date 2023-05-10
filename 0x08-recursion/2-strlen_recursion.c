#include "main.h"

/**
 * _strlen_recursion - A function that returns the lenght of a string.
 * @s: parameter
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count += 1;
		_strlen_recursion(s + 1);
	}
	return (count);
}
