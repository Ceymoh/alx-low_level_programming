#include "main.h"

/**
 * _strstr - finds the occurence of the substring
 * @haystack: string to be used
 * @needle: another string
 *
 * Return: on success return substring else return NULL
 */

char *_strstr(char *haystack, char *needle)

{
	int j = 0;
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (*haystack == needle[i])
			{
				j++;
				break;
			}
			else if (needle[i + 1] == '\0')
				return (needle);
		}
		i++;
	}

	return ("\n");
}

