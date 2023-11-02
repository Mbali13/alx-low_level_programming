#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings while
 * second string is an n value
 * @s1: string 1
 * @s2: string 2
 * @n: number of element to concatenate from s2
 * Return: pointer to to the new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, g, k;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			;
	}

	if (s2 == NULL)
		g = 0;
	else
	{
		for (g = 0 ; s2[g] != '\0' ; g++)
			;
	}
	if (g > n)
		g = n;
	s = malloc(sizeof(char) * (i + g + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0 ; k < i ; k++)
		s[k] = s1[k];
	for (k = 0 ; k < g ; k++)
		s[k + i] = s2[k];
	s[i + g] = '\0';
	return (s);
}
