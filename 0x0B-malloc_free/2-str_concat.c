#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  a function that concatenates two strings
 * @s1: input string
 * @s2: input string
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concot;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	concot = malloc(sizeof(char) * (i + ci + 1));

	if (concot == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		concot[i] = s1[i];
		i++;
	}
	while (s2[ci] != '\0')
	{
		concot[i] = s2[ci];
		i++, ci++;
	}
	concot[i] = '\0';
	return (concot);
}
