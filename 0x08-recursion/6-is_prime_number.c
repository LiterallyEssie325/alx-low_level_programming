#include "main.h"

int actual_prime(int n, int k);

/**
 * is_prime_number -  if the input integer is
 *  a prime number or not
 * @n: integer number
 *
 * Return: 1 if n is a prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - evaluates if an integer is
 * a prime number recursively
 * @n: number to consider
 * @k: iterator
 *
 * Return: 1 if n is prime, otherwise 0
 */
int actual_prime(int n, int k)
{
	if (k == 1)
		return (1);
	if (n % k == 0 && k > 0)
		return (0);
	return (actual_prime(n, k - 1));
}

