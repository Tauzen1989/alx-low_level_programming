#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * add_node - add a node at the beginning of a linked list
 * @head: pointer to first node of the linked list
 * @str: string to be added to the node
 *
 * Return: pointer to linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	new_node = (list_t *) malloc(sizeof(list_t));
	while (str[len] != '\0')
		len++;
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
