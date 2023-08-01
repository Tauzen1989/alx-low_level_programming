#include "lists.h"

/**
 * *get_nodeint_at_index - finds the nth node of the list
 * @head: pointer to the first node of the list
 * @index: index of the node, starting at 0
 *
 * Return: the nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nthNode;
	unsigned int count;

	nthNode = head;
	count = 0;
	while (nthNode != NULL)
	{
		if (count == index)
			return (nthNode);
		count++;
		nthNode = nthNode->next;
	}

	return (nthNode);
}
