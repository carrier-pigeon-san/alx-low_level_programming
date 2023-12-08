#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head - pointer to the head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempnode, *tempnode1;

	tempnode = head;
	while (tempnode != NULL)
	{
		tempnode1 = tempnode->next;
		free(tempnode);
		tempnode = tempnode1;
	}
}
