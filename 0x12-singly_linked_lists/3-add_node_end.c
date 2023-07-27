#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - add node to the end of the list.
 * @head: pointer to the address of the head.
 * @str: the str member for the new node.
 *
 * Return: Address of the newly added element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *item;
	int len;
	list_t *temp;

	item = malloc(sizeof(list_t));
	if (item == NULL)
		return (NULL);
	len = 0;
	while (str[len])
		len++;
	item->str = strdup(str);
	item->len = len;
	if (*head == NULL)
	{
		*head = item;
	}
	else
	{
		temp = *head;
		while (temp != NULL)
		{
			if (temp->next == NULL)
			{
				temp->next = item;
				break;
			}
			temp = temp->next;
		}
	}
	return (item);
}
