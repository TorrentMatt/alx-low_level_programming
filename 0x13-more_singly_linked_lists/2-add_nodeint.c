#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: a pointer to a pointer to the head of the list
 * @n: the value to store in the new node
 * Return: a pointer to the new node, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *n_node;

    if (head == NULL)
        return(NULL);

    n_node = malloc(sizeof(listint_t));
    if (n_node == NULL)
        return (NULL);

    n_node->n = n;
    n_node->next = *head;
    *head = n_node;

    return (n_node);
}
