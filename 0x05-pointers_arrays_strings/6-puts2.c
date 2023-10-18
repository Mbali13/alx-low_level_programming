#include "main.h"

/**
 * puts2 - function should print 1 character out of 2 starting
 * with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int i = 0;
	int a = 0;
	char *y = str;
	int j;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	a = i - 1;
	for (j = 0 ; j <= a ; j++)
	{
		if (j % 2 == 0)
	{
		_putchar(str[j]);
	}
	}
	_putchar('\n');
}
