#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -  a function that executes a function
 *  given as a parameter on each element of an array.
 *  @array: array
 *  @size: size of the array
 *  @action: pointer to the function you need to use
 *
 *  Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
