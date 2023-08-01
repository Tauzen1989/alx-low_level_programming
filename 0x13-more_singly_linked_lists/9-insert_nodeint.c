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
	listint_t *newNode;
	int count;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	newNode->n = n;
