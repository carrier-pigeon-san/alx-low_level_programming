#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: head of the list
 * @str: node data
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int l = 0;
	list_t *nod;
	list_t *temp;

	while (str[l] != '\0')
		l++;

	nod = malloc(sizeof(list_t));
	if (nod == NULL)
	{
		free(nod);
		return (NULL);
	}

	temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
	}

	nod->len = l;
	nod->str = strdup(str);
	nod->next = NULL;

	if (temp)
		temp->next = nod;
	else
		*head = nod;

	return (nod);
}
