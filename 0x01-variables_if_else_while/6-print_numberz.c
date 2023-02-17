#include <stdio.h>

/**
 * main - print all single digits of base 10
 * usin the putchar function
 *
 * Return: 0
 *
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
