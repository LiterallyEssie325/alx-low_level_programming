#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte.
 * @s: starting address memory to be filled
 * @b: value
 * @n: number of bytes
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
