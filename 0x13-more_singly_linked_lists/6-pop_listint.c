#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* pop_listint - that deletes the head node of a listint_t linked list
* @head: variable pointer to pointer
* Return: the head node’s data (n)
*/

int pop_listint(listint_t **head)
{
	listint_t *p, *q;
	int tmp;

	if (*head == NULL)
		return (0);

	else
	{
		q = *head;
		p = (*head)->next;
		tmp = (*head)->n;
		free(q);
		*head = p;
	}
	return (tmp);
}
