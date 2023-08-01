#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint_end - adds a node at the end of the list
 * @head: pointer to the first node of the list
 * @n: member of the added node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tmp;

	newNode = (listint_t *) malloc(sizeof(listint_t));
	tmp = *head;
		newNode->n = n;
		newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return(newNode);
	}
	
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
		tmp->next = newNode;

	return (newNode);
}
