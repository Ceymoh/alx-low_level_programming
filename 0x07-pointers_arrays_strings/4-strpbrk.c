#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string input value to be used
 * @accept: another string input value
 * Return: return s for success and NULL if byte not found
 *
 */

char *_strpbrk(char *s, char *accept)

{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
			}
			s++;
		}
		return ('\0');
}
