#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -a program that will be executed once
 * a number is assigned to the variable
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int v;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	v = n % 10;
	printf("Last digit of %d is %d ", n, v);
	if (v > 5)
	{
		printf("and is greater than 5");
	}
	if (v == 0)
	{
		printf("and is 0");
	}
	if (v < 6 && v != 0)
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
