#include "3-calc.h"
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - gives the sum of two numbers
 * @a: value 1
 * @b: value 2
 * Return: gives the sum
 */

int op_add(int a, int b)

{
	return (a + b);
}

/**
 * op_sub - gives the difference of 2 numbers
 * @a: value 1
 * @b: value 2
 * Return: the difference
 */

int op_sub(int a, int b)

{
	return (a - b);
}

/**
 * op_mul - gives the product of 2 numbers
 * @a: value 1
 * @b: value 2
 * Return: the product of numbers
 */

int op_mul(int a, int b)

{
	return (a * b);
}

/**
 * op_div - gives the resultd of division
 * @a: value 1
 * @b: value 2
 * Return: return division result
 */

int op_div(int a, int b)

{
	return (a / b);
}

/**
 * op_mod - gives the module
 * @a: value 1
 * @b: value 2
 * Return: result of module
 */

int op_mod(int a, int b)

{
	return (a % b);
}
