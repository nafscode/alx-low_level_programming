#include "main.h"

/**
 * _islower - A function that checks for lowecase
 * character.
 * @c: first parameter
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
