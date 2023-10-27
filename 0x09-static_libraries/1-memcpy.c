#include "main.h"

/**
 * _memcpy - main function prototype
 * @src: source parameter
 * @dest: destination parameter
 * @n: function parameter
 * Return: Copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
