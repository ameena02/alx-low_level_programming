#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get-endianness- checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;
	if (*c)
	{
		printf("Little endian\n");
	}
	else
	{
		printf("Big endian\n");
	}

	return 0;
}
