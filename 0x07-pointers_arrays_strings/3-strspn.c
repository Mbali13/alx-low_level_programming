#include "main.h"

/**
 *  _strspn - main function
 * @s: function parameter
 * @accept: function parameter
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int _strspn(char *s, char *accept);
	unsigned int i = 0;
	int b;

	while (*s)
	{
	for (b = 0 ; accept[b] ; b++)
	{
	if (*s == accept[b])
	{
	i++;
	break;
	}
	else if (accept[b + 1] == '\0')
	return (i);
	}
	s++;
	}
	return (i);
}
