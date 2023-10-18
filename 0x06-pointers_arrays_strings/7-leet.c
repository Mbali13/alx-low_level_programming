#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @str: set of strings to be encoded
 * Return: Encoded string
 */

char *leet(char *str)
{
	int i, g;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (g = 0 ; c[g] != '\0' ; g++)
		{
			if (str[i] == c[g])
			{
				str[i] = d[g];
			}
		}
	}
	return (str);
}
