#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data(n) of a list.
 * @head: pointer to the first node of a list
 *
 * Return: sum of all the data(n) of a list
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum, data;

	tmp = head;
	if (head == NULL)
		return (0);
	sum = 0;
	while (tmp != NULL)
	{
		data = tmp->n;
		sum = sum + data;
		tmp = tmp->next;
	}

	return (sum);
}
