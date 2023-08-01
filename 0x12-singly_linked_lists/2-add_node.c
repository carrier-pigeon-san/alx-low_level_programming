#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of the list
 * @str: node data
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nod = malloc(sizeof(list_t));

	nod->str = strdup(str);
	nod->next = head;
	return (nod);
}
