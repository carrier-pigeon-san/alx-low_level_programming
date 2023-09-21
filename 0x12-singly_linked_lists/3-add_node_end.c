#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list list_t
 * @head: pointer to head of the linked list list_t
 * @str: head->str
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *temp;
	list_t *node;

	for (len = 0; str[len] != '\0'; len++)
		;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = len;
	temp->str = strdup(str);
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		node = *head;
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = temp;
	}

	return (temp);
}
