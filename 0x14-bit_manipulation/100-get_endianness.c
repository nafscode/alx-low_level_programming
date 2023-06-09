#include "main.h"

/**
 * get_endianness - A function that checks the endianness
 * Return: 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	unsigned int digit;
	char *ptr;

	digit = 1;
	ptr = (char *)&digit;

	return ((int)(*ptr));
}
