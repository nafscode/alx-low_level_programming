#include "main.h"

/**
 * is_prime_number - A function that returns 1 if the input integer is a
 * prime number, otherwise return 0
 * @n: parameter
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	int prime(int k, int n);
	int k = 2;

	if (n == 2)
	{
		return (1);
	}
	return (prime(2, n));
}

/**
 * prime - check if a number is prime
 * @n: number
 * @k: parameter to check
 * Return: int
 */

int prime(int k, int n)
{
	if (n < 2 || b % k == 0)
		return (0);
	else if (k > b / 2)
		return (1);
	else
		return (prime(k + 1, n));
}
