#include "main.h"

/**
 * print_rev - function that prints a string, in
 *  reverse, followed by a new line.
 *  @s: parameter to be printed
 *  Return: 0
 */
void print_rev(char *s)
{
	int longy = 0;
	int y;

	while (*s != '\0')
	{
		longy++;
		s++;
	}
	s--;
	for (y = longy; y > 0; y--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
