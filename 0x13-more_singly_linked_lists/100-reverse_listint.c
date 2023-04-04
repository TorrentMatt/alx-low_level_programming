#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *node = *head;
	
	while (node)
	{
		listint_t *next = node->next;
		node->next = prev;
		prev = node;
		node = next;
	}
	*head = prev;
	
	return (*head);
}
