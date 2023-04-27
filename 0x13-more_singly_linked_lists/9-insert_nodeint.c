#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *insert_nodeint_at_index - that inserts a new node at a given position
* @head: variable pointer to pointer
* @idx:  index of the list where the new node should be added
* @n: integer
* Description: Write a function that inserts a new node at a given position
* Return: that inserts a new node at a given position
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i = 0;

	if (head == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	temp = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;

	while (i < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		i++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
	}
