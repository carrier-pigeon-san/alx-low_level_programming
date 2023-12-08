#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at given index of a dlistint_t linked list
 * @head: double pointer to head of list
 * @index: index of node
 *
 * Return: 1 (success)/ -1 (failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t counter = 0;
	dlistint_t *cachenode;

	if (*head == NULL)
		return (-1);

	cachenode = *head;

	if (index == 0)
	{
		if ((*head)->next == NULL)
			*head = NULL;
		else
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		free(cachenode);
		return (1);
	}

	while (counter < index)
	{
		if (cachenode->next == NULL)
			return (-1);
		cachenode = cachenode->next;
		counter++;
	}
	if (cachenode->next == NULL)
		cachenode->prev->next = NULL;
	cachenode->prev->next = cachenode->next;
	cachenode->next->prev = cachenode->prev;
	free(cachenode);
	return (1);
}
