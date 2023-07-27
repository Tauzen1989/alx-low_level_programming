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
	size_t size;

	size = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
		{
			printf("[%d]", h->len);
			printf("%s\n", h->str);
		}
		size++;
		h = h->next;
	}

	return (size);
}
