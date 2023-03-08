#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: length
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int longy = 0;

	if (*s)
	{
		longy++;
		longy += _strlen_recursion(s + 1);
	}

	return (longy);
}

