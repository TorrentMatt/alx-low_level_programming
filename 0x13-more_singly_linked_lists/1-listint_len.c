#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: a pointer to the head of the list
 *
 * Return: the number of elements in the list
*/

size_t listint_len(const listint_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		node_num++;
		h = h->next;
	}

	return (node_num);
}

