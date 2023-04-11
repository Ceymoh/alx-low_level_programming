#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char and initializes with char
 * @size: size of the integer.
 * @c: specific character to initialize
 * Return: if size is zero return NULL and pointer of array in success
 *
 */

char *create_array(unsigned int size, char c)

{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
