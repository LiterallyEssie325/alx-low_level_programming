#include <stdio.h>
/**
 * main -to write a program that prints
 * the alphabet in lowercase.
 *
 * Return: 0
 *
 */
int main(void)
{

	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		/* we need an increase from a to b */
		letter++;
	}

	putchar("\n");
	return (0);
}
