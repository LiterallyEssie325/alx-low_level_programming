#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: parameter to be printed
 * Return: 0
 */
void print_number(int n)
{
	unsigned int v;

	v = n;
	if (n < 0)
	{
		_putchar('-');
		v = -n;
	}
	if (v / 10 != 0)
	{
		print_number(v / 10);
	}
	_putchar((v % 10) + '0');
}
