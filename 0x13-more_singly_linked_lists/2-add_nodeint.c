#include "lists.h"

/**
 * listint_t - adds a new node
 * @h: constant value used
 * @n: value to insert new node
 * Return: a new node
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *s;

	s = malloc(sizeof(listint_t));
			if (!s)
			return (NULL);
	s->n = n;
	s->next = *head;
	*head = s;

	return (s);
}

