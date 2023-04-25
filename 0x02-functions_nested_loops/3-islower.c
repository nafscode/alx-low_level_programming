#include "main.h"

/**
 * _islower - A function that checks for lowecase
 * character.
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
