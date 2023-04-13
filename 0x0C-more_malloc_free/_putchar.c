#include "main.h"
#include <stdio.h>

/**
 * _putchar - prints character c to stdout
 * Retun: succes 1
 * @c: character used
 * on error, -1 is returned and errno is set appropriately
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
