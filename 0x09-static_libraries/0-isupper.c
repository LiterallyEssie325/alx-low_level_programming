#include "main.h"

/**
 * _isupper - a function that prints the
 * alphabets in uppercase
 * @c: input value
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
