#include <stdio.h>

/**
 * main -program that print lowercase
 * alphabet except q and e
 *
 * Return: 0
 *
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
