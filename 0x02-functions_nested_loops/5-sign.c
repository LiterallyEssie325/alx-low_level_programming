#include "main.h"

/**
 * print_sign - function that print the sign of a number
 *
 * @n: parameter to be checked
 *
 * Return: 1 if n is greater than zero
 * or 0 i n is equal to zero
 * and -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
