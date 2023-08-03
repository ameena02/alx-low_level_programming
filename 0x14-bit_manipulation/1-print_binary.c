#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - that prints the binary representation of a number
 * @n: number
 * Description: Write a function that prints
 * Return:
 */

void print_binary(unsigned long int n)
{
	unsigned long int a = 2, x = 0;

	while (a <= n && x < 62)
	{
		a = a << 1;
		x++;
	}

	if (x != 62)
		a = a >> 1;

	while (a != 0)
	{
		if ((a & n) != 0)
		{
			x++;
			_putchar('1');
		}
		else
		{
			x++;
			_putchar('0');
		}
		a = a >> 1;
	}
}
