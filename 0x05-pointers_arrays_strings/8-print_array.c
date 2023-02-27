#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * followed by a new line
 * @a: array name
 * @n: number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int v;

	for (v = 0; v < (n - 1); v++)
	{
		printf("%d, ", a[v]);
	}
	if (v == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
