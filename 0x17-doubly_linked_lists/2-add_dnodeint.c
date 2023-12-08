#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of the node
 * @n: node data
 *
 * Return: address of new element/NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;

	return (*head);
}
