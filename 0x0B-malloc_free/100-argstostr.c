#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - convert the params passed to the program to string
 * @ac: argument count
 * @av: argument vector
 * Return: ...
 */
char *argstostr(int ac, char **av)
{
	int ch = 0;
	int i = 0;
	int g = 0;
	int b = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][g])
		{
			ch++;
			g++;
		}
		g = 0;
		i++;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);
	i = 0;

	while (av[i])
	{
		while (av[i][g])
		{
			s[b] = av[i][g];
			b++;
			g++;
		}
		s[b] = '\n';

		g = 0;
		b++;
		i++;
	}
	b++;
	s[b] = '\n';
	return (s);
}
