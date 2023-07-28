#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - add node  at the end of the list.
 * @head: pointer to the address of the first node
 * @str: the string member for the new node.
 *
 * Return: address of the newly added new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;
	list_t *temp;

	new_node = (list_t *) malloc(sizeof(list_t));
	new_node->next = NULL;	
	temp = *head;
		while (temp -> next != NULL)
		{
			temp = temp -> next;
		}
			temp -> next = new_node;
	len = 0;
	while (str[len])
		len++;
	new_node->str = strdup(str);
	new_node->len = len;
		
	return (new_node);
}
