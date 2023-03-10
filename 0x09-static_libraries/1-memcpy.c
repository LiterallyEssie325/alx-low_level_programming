#include "main.h"

/**
 * _memcpy - a function that copies a memory area
 * @dest: input value
 * @src: input value
 * @n: number of bytes
 *
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
