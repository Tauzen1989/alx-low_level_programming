#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all the elements of a list
 * @h: a pointer to the first node of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t count;

	tmp = h;
	count = 0;
	while (tmp != NULL)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
