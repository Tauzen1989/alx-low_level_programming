#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list
 * @h: pointer to the first node of the list_t list
 *
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
