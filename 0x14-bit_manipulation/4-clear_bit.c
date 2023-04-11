#include "main.h"

/**
 * clear_bit - sets value of a bit at a given index
 * @n: input value
 * @index: input value
 *
 * Return: 1 on Success otherwise, -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
