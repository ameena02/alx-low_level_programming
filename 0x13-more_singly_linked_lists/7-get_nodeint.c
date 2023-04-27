#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *get_nodeint_at_index - that returns the nth node of a listint_t linked list
* @head: variable pointer
* @index: integer
* Return: returns the nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int x = 0;

	if (head != NULL)
	{
		tmp = head;

		while (tmp != NULL)
		{
			if (x == index)
				return (tmp);

			tmp = tmp->next;
			x++;
		}
	}
	return (NULL);
}
