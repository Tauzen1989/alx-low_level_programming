#include "lists.h"

/**
 * obtain_length - calculates the length of a string
 * @str: string to be measured
 *
 * Return: length of @str
 */
unsigned int obtain_length(const char *str)
{
	unsigned int n, length = 0;

	if (str == NULL)
		return (0);

	n = 0;
	while (str[n] != '\0')
	{
		length++;
		n++;
	}
	return (length);
}

/**
 * add_node - add a node at the beginning of a linked list
 * @head: pointer to first node of the linked list
 * @str: string to be added
 * Return: pointer to linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	unsigned int len;

	if (new == NULL)
		return (NULL);
	len = obtain_length(str);
	new->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
