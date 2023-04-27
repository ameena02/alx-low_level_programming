#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* clear_bit - that sets the value of a bit to 0 at a given index
* @n: pointer
* @index: the index
* Description: function that sets the value of a bit to 0
* Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);

}
