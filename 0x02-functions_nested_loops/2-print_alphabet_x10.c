#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lower case 10x
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char g;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (g = 'a' ; g <= 'z' ; g++)
			_putchar(g);
		_putchar('\n');
	}
}
