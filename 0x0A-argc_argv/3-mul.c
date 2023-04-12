#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: counts the arguments in the program
 * @argv: the string of arrays
 * @atoi: converts string to integer
 * Return: incase of failure print erro and return 1.
 *
 */

int main(int argc, char **argv)

{
	int i, j, m;

	m = 0;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]); /* converts string to integer*/

	j = atoi(argv[2]);

	m = (i * j);

	printf("multiplication of %d, %d is: %d\n", i, j, m);
	return (0);
}
