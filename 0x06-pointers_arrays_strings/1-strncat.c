#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int g;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	g = 0;
	while (g < n && src[g] != '\0')
	{
	dest[i] = src[g];
	i++;
	g++;
	}
	dest[i] = '\0';
	return (dest);
}
