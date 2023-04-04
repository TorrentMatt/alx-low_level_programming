#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *n_next = NULL;
	
	while (*head)
	{
		n_next = (*head)->n_next;
		(*head)->n_next = prev;
		prev = *head;
		*head =n_next;
	}
	*head = prev;
	
	return (*head);
}
