#include "main.h"
#include <stdio.h>

/**
 * main - print name
 * @argc: number of command line arguments
 * @argv: array that contains the command line arg..
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
