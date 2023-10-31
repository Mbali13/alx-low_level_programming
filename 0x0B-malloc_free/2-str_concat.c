#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates 2 strings of any size
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: two strings to concatenate
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int g = 0;
	int a = 0;
	int b = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[g])
		g++;

	b = i + g;
	s = malloc((sizeof(char) * b) + 1);

	if (s == NULL)
		return (NULL);

	g = 0;

	while (a < b)
	{
		if (a <= i)
			s[a] = s1[a];

		if (a >= i)
		{
			s[a] = s2[g];
			g++;
		}
		a++;
	}
	s[a] = '\0';
	return (s);
}
