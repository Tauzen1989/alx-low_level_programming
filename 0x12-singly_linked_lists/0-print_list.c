#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the first node on the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count;
	const list_t *tmp;
	tmp = h;

	count = 0;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0](nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		count++;
		tmp = tmp->next;
	}

	return (count);
}
