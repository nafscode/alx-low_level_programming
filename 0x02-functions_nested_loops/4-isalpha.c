#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic
 * character.
 * @c: first parameter
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >='a' && c <= 'z'))
		return (1);
	else
		return (0);
}
