#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h:
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		if (h -> str == NULL)
		        printf("[%d] %s", 0, "(nil)");
		else
		{
			printf("[%u] %s", h-> len, h -> str);
			h = h -> next;
			size++;
	}
	return (size);
}
