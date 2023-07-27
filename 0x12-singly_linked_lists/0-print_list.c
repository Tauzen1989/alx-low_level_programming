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
	const list_t *temp;
	temp = h;
	size_t count;


	count = 0;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0](nil)");
		else
		{
			printf("[%d]", temp->len);
			printf("%s\n", temp->str);
		}
		count++;
		temp = temp->next;
	}

	return (size);
}
