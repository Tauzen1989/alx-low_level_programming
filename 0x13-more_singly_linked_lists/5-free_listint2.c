#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees the listint_t list
 * @head: pointer to the first node of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
