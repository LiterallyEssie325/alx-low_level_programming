#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 * @str: input value
 *
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
