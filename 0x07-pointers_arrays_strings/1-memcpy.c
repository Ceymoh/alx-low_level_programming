#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: memeory area
 * @n: integer
 * Return: success return dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];

	}
	return (dest);
	{
		return ("\n");
	}
}

