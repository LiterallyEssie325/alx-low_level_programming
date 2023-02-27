#include "main.h"

/**
 * puts_half - function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input to be printed
 * Return: hal o input
 */
void puts_half(char *str)
{
	int b, n, longy;

	longy = 0;

	for (b = 0; str[b] != '\0'; b++)
		longy++;

	n = (longy / 2);

	if ((longy % 2) == 1)
		n = ((longy + 1) / 2);
	for (b = n; str[b] != '\0'; b++)
		_putchar(str[b]);
	_putchar('\n');
}
