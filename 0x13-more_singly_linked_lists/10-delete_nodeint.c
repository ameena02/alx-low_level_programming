#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* delete_nodeint_at_index - that deletes the node at index index
* @head: variable pointer to pointer
* @index:  the index of the node that should be deleted. Index starts at 0
* Description: Write a function that deletes the node at index
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	listint_t *tmp, *del_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	while (tmp != NULL && i < (index - 1))
	{
		tmp = tmp->next;
		i++;
	}

	del_node = tmp->next;
	tmp->next = del_node->next;
	free(del_node);
	return (1);
}
