#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: an array
 * @size: represents the bytes size
 * Return: Null for fail
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	unsigned int i = 0, j = 0;
	char *s;

	j = nmemb * size;
	if (nmemb == 0 && size == 0)
		return (NULL);

	s = malloc(sizeof(j));

	if (s == NULL)
		return (NULL);
	while (i < j)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}

