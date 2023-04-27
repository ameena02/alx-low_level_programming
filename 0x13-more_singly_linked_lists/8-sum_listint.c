#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* sum_listint - the sum of all the data (n) of a listint_t linked list
* @head: variable pointer
* Return: the sum of all the data (n)
*/

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
