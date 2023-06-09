#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index
 * @n: pointer to digits
 * @index: index
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 63)
		return (-1);

	p = 1 << index;

	if (*n & p)
	{
		*n ^= m;
	}
	return (1);
}
