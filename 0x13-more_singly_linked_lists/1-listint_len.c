#include "lists.h"

/**
 * listint_len - counts the number of elements in a node
 * @h: pointer to the first node in the list
 *
 * Return: the number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t count;

	tmp = h;
	count = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}

	return (count);
}
