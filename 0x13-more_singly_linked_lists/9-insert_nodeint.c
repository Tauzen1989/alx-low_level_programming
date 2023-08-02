#include "lists.h"
#include <stdlib.h>

/**
 * *insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to the first node of the list
 * @n: member of the new node
 * @idx: is the index of the list where the new node is added.
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tmp;
	unsigned int count;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;
	if (newNode == NULL || *head == NULL)
		return (NULL);
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		newNode = *head;
		return (newNode);
	}
	tmp = *head;
	for (count = 0; count < idx - 1; count++)
	{
		if (tmp != NULL)
		{
			tmp = tmp->next;
		}
	}
		if (tmp != NULL)
		{
			newNode->next = tmp->next;
			tmp->next = newNode;
			newNode = tmp->next;
		}

	return (newNode);
}
