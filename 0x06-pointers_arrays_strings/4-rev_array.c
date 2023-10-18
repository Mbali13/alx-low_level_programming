#include "main.h"

/**
 *  reverse_array - function name
 *  @a: parameter 1
 *  @n: parameter 2
 *  Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int g;

	for (i = 0 ; i < n / 2 ; i++)
	{
		g = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = g;
	}
}
