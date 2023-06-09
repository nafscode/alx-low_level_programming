#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first digits
 * @m: other digits
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, count;

	result = n ^ m;
	count = 0;

	while (result != 0)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
