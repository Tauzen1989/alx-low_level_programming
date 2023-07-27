#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - add node to the end of the list.
 * @head: pointer to the address of the first node
 * @str: the string member for the new node.
 *
 * Return: address of the newly added element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	int len;
	list_t *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	len = 0;
	while (str[len])
		len++;
	new_node->str = strdup(str);
	new_node->len = len;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp != NULL)
		{
			if (temp->next == NULL)
			{
				temp->next = new_node;
				break;
			}
			temp = temp->next;
		}
	}
	return (new_node;
}
