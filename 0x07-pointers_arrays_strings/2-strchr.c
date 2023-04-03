#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a char in a string
 * @c: character
 * @s: string
 * Return: success return s or NULL if char not found
 *
 */

char *_strchr(char *s, char c)

{
	int j;

	for (j = 0; j >= '\0'; j++)
	{
		if (s[j] == c)
		return (&s[j]);
	}

		return (0);
}
