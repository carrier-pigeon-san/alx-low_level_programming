#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to head of list
 * @idx: index
 * @n: node data
 *
 * Return: address to the new node/NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t counter = 0;
	dlistint_t *tempnode, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	tempnode = *h;
	while (counter < idx - 1)
	{
		if (tempnode->next == NULL)
			return (NULL);
		tempnode = tempnode->next;
		counter++;
	}
	newnode->next = tempnode->next;
	tempnode->next = newnode;
	newnode->prev = tempnode;

	return (newnode);
}
