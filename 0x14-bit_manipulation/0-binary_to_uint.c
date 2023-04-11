#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: input value
 *
 * Return: the converted number otherwise, 0 if b is NULL
 */

unsigned int binary_to uint(const char *b)
{
	int i;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec = 2 * dec + (b[i] - '0');
	}

	return (dec);
}
