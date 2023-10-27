#include "main.h"

/**
 * _abs - function to find the of a number
 * @a: funtion parameter
 * Return: -a or a;
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
