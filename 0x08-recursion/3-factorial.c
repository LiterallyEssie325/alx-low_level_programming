#include "main.h"

/**
 * factorial - function that returns the
 *  factorial of a given number.
 *  @n: input value
 *
 *  Return: -1 If n  is lower than 0
 *  otherwise return factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

