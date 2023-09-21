#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list_t list
 * @head: head of linked list list_t
 * @str: list_t->str
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *temp;

	for (len = 0; str[len] != '\0'; len++)
		;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->len = len;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (*head);
}
