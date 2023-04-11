#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: character value used
 * @s2: character value 2
 * Return: on failure return NULL
 *
 */

char *str_concat(char *s1, char *s2)

{
	char *c;
	int i, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = n = 0;
	while (s1[i])
		i++;
	while (s2[n])
		n++;
	c = malloc(sizeof(char) * (i + n + 1));
	if (c == NULL)
		return (NULL);
	i = n = 0;
	while (s1[i])
	{
		c[i] = s1[i];
		i++;
	}
	while (s2[n])
	{
		c[i] = s2[n];
		i++, n++;
	}
	return (c);
}
