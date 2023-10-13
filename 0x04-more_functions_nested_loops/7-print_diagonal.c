#include "main.h"

/**
 * print_diagonal - prints diagonal using '\' character
 * @n: number of times the '\' should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i, g;

	for (i = 0 ; i < n ; i++)
	{
		if (n > 1)
			for (g = 0 ; g < i ; g++)
				_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
