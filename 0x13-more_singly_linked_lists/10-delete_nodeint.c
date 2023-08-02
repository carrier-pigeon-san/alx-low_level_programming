#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: double pointer to the head of the list
 * @index: index of a node
 * Return: 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nod;
	unsigned int c = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}

	while (c < index - 1)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		c++;
	}

	nod = temp;
	temp = temp->next;
	nod->next = temp->next;
	free(temp);

	return (0);
}
