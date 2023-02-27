#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 *  starting with the first character, followed by a new line.
 *  @str: input
 *  Return: print
 */
void puts2(char *str)
{
	int longy = 0;
	int w = 0;
	char *d = str;
	int h;

	while (*d != '\0')
	{
		d++;
		longy++;
	}
	w = longy - 1;
	for (h = 0; h <= w; h++)
	{
		if (h % 2 == 0)
		{
			_putchar(str[h]);
		}
	}
	_putchar('\n');
}
