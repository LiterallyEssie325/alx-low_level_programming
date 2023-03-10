#include "main.h"

/**
 * _memset - fill a block o memory with a speciic value
 * @s: starting address to be filled
 * @b: desired address
 * @n: number of bytes
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
