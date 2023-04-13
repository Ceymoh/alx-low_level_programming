#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: size of memory
 * @s2: size of memory
 * @n: integer size
 * Return: return NULL for failure
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int i = 0, j = 0, con1 = 0, con2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[con1])
		con1++;

	if (n >= con1)
		con2 = i + con1;
	else
		con2 = i + n;
	str = malloc(sizeof(char) * con2 + 1);
	if (str == NULL)
		return (NULL);
	con1 = 0;
	while (j < con2)
	{
		if (j <= i)
			str[j] = s1[j];

		if (j >= i)
		{
			str[j] = s2[con1];
			con1++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}


