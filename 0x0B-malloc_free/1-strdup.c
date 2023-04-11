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
	char *s;
	int i;
	int j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i])
	{
		j++;
	}
	s = malloc((sizeof(char) * j) + 1);
	if (s == NULL)
		return (NULL);
	j = 1;
	while (i < j)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
