#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint - adds a node at the begining of the list
 * @head: pointer to the first node of the list
 * @n: member of the new node added
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;

	return (newNode);
}
