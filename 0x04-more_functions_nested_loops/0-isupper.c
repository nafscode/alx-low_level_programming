#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: parameter
 * Return: 1 if uppercase, otherwise 0.
 */

int _isupper(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
