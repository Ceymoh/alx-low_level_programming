#include "main.h"

/**
 * _memset - fill memory with constant a byte.
 * @b: constant byte.
 * @s: value used.
 * @n: unsigned int
 * Return: success return s
 *
 */


char *_memset(char *s, char b, unsigned int n)

{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
	{
		return ("\n");
	}
}

