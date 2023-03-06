#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: number of bytes
 * @accept: input value
 *
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int d = 0;
	int h;

	while (*s)
	{
		for (h = 0; accept[h]; h++)
		{
			if (*s == accept[h])
			{
				d++;
				break;
			}
			else if (accept[h + 1] == '\0')
				return (d);
		}
		s++;
	}
	return (d);
}
