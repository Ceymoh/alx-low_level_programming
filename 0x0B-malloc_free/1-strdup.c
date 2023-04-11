#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Points duplicate to anew string
 * @str: memory of the new string
 * Return: pointer to a newly allocated space and NULL for failure
 *
 */

char *_strdup(char *str)

{
	char *c;
	int i;
	int j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i])
	{
		j++;
	}
	c = malloc((sizeof(char) * j) + 1);
	if (c == 0)
		return (NULL);
	j = 1;
	while (i < j)
	{
		c[i] = str[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
