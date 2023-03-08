#include "main.h"

int actual_sqrt_recursion(int n, int j);

/**
 * _sqrt_recursion - function that returns the
 *  natural square root of a number.
 *  @n: input value
 *
 *  Return: -1 If n does not have a natural square root
 *  otherwise return the natural root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the
 * natural square root of the number
 * @n: input value
 * @j: iterator
 *
 * Return: the square root gotten
 */
int actual_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (actual_sqrt_recursion(n, j + 1));
}

