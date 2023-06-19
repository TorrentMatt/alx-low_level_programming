#include "lists.h"

/**
 * free_dlistint - function has one arg
 * @head: pointer to linked 
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cursor = head;

	while (head)
	{
		head = head->next;
		free(cursor);
		cursor = head;
	}
}
