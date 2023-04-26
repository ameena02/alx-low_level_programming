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
	int j, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	number = 0;
	for (j = 0; b[j] != '\0'; j++)
	{
		number = number << 1;

		if (b[j] == '1')
			number = number + 1;
	}
	return (number);
}
