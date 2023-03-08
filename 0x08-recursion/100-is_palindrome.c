#include "main.h"

int check_pal(char *s, int i, int longy);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to reverse
 *
 * Return: 1 otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length o the string
 * @s: string to be measured
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
* check_pal - checks the characters recursively
* @s: string to check
* @i: iterator
* @longy: length o the string
*
* Return: 1 otherwise 0
*/
int check_pal(char *s, int i, int longy)
{
	if (*(s + i) != *(s + longy - 1))
		return (0);
	if (i >= longy)
		return (1);
	return (check_pal(s, i + 1, longy -1));
}
