#include "main.h"

/**
 *  _strlen - function that returns the length of a string.
 *  @s: string to be printed
 *  Return: length
 */
int _strlen(char *s)
{
	int longy = 0;

	while (*s != '\0')
	{
		longy++;
		s++;
	}

	return (longy);
}
