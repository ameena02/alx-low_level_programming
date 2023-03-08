#include "main.h"
#include <stdio.h>
/**
 * wildcmp - Entry Point
 * @s1: input
 * @s2: input
 * Return: 0
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
		return (1);
	if (*s2 == '*' && *(s1 + 1) && *s2)
		return (0);
	return (0);
}
