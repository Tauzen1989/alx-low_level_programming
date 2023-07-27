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

	while (h)
	{
		if (h -> str == NULL)
		        printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s", h-> len, h -> str);
			h = h -> next;
			size++;
	}
	return (size);
}
