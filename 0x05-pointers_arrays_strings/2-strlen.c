#include "main.h"

/**
 * _strlen - gives the length of a line
 * Return: length of the line
 * @s: string
 */

int _strlen(char *s)

{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
