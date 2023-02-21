#include "main.h"

/**
 * _abs - function that computes the absolute
 * value of an integer
 *
 * @n: parameter to be computed
 * Return: absolute value of a number
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
