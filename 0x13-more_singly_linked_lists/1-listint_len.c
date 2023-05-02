#include "lists.h"

/**
 * listint_len - returns a number of elements in a linked list
 * @h: constant value
 *
 * Return: number of elements
 *
 */

size_t listint_len(const listint_t *h)

{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
