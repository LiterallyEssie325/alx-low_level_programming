#include "main.h"

/**
 * *_memcpy -  a function that copies memory area.
 * @n: number of bytes to be copied
 * @src: memory area to be copied
 * @dest: memory area where it will be stored
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int j = n;

	for (; r < j; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
