#include <stdio.h>

/**
 * main - a program that print the
 * tebahpla in reverse
 *
 * Return: 0
 *
 */
int main(void)
{
	char v;

	for (v = 'z' ; v >= 'a' ; v--)
		putchar(v);
	putchar('\n');
	return (0);
}
