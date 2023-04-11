#include "main.h"

/**
 * flip_bits - returns the number of bits you need to
 * flip from one number to another
 * @n: input value
 * @m: input value
 *
 * Return: change in number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long t;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		t = x >> i;
		if (t & 1)
			count++;
	}

	return (count);
}
