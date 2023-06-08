#include "main.h"

/**
* get_bit - A function that returns the value of a bit at a given index.
* @n: number
* @index: index
* Return: bit.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count;

	if (n == 0 && index < 64)
		return (0);

	for (count = 0; count < 64; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
