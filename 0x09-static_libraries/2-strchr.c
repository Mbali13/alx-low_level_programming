#include "main.h"

/**
 * _strchr - main function
 * @s: function parameter
 * @c: function parameter
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int b;

	for (b = 0 ; s[b] >= '\0' ; b++)
	{
		if (s[b] == c)
			return (s + b);
	}
	return (0);
}
