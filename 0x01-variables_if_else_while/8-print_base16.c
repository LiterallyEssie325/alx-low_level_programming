#include <stdio.h>

/**
 * main - a program that prints single digits
 * in base 16 lowercase
 *
 * Return: 0
 *
 */
int main(void)
{
	int s;
	char l;

	for (s = 0 ; s < 10 ; s++)
		putchar(s + '0');
	for (l = 'a' ; l <= 'f' ; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
