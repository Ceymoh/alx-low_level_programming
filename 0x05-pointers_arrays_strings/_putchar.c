#include "main.h"
#include <unistd.h>


/**
 * _putchar - prints character c to stdout
 * Return: success 1
 * @c: character used
 * on error, -1 is returned and errno is set appropriately
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}

