#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - that converts a binary number to an unsigned int
 * @b: variable pointer
 * Description: Write a function that converts a binary number
 * Return: the converted number, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int x, a = 0;

	if (b == NULL)
		return (0);

	while (b[a] != '\0')
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		a++;
	}
	number = 0;
	for (x = 0; b[x] != '\0'; x++)
	{
		number = number << 1;

		if (b[x] == '1')
			number = number + 1;
	}
	return (number);
}
