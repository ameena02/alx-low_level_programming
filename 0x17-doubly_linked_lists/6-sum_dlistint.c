#include "lists.h"
/**
 * sum_dlistint_rec - sum node values of double linked list recursively.
 * @head: pointer to list.
 * @sum: sum of node's data.
 * Return: sum.
 */
int sum_dlistint_rec(dlistint_t *head, int sum)
{
	if (head)
		sum = sum_dlistint_rec(head->next, sum + head->n);
	return (sum);
}

int sum_dlistint(dlistint_t *head)
{
	int n = 0;

	return (sum_dlistint_rec(head, n));
}
