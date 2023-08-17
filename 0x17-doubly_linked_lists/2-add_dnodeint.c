#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning of a dlistint_t list.
 * @head: points to list head.
 * @n: integer to be included in the new node.
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head; /* New Head points to old_head */
		if (*head)
			(*head)->prev = new_node; /* Old Head points to new_head */
		*head = new_node;
	}
	return (new_node);
}
