#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: integer to allocate memory
 * Return: pointer to allocated memory.
 *
 */

void *malloc_checked(unsigned int b)

{
	void *r;

	r = malloc(sizeof(b));

	if (r == NULL)
		exit(98);

	return (r);
}

