#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13
 * @m: pointer to the parameters
 * Return: *m
 */
char *rot13(char *m)
{
	int j;
	int k;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; m[j] != '\0'; j++)
	{
		for (k = 0; k < 52; k++)
		{
			if (m[j] == data[k])
			{
				m[j] = datarot[k];
				break;
			}
		}
	}
	return (m);
}
