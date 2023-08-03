#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* flip_bits - function that returns the number of bits you would need to flip
* @n: integer
* @m: integer
* Return: the number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, j = 0;

	i = n ^ m;

	while (i > 0)
	{
		if ((i & 1) != 0)
			j++;

		i = i >> 1;
	}
	return (j);
}
