#include <stdio.h>
#include <stdiolib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 5 > 5)
		printf("%d last digit of n is greater than 5\n", n, n % 5);
	else if (n % 5 == 0)
		printf("d  last digit of n is 0\n", n, n % 5);
	else
		printf("$d  last digit of n is less than 6 and not 0\n", n, n % 5);
	return (0);
}
