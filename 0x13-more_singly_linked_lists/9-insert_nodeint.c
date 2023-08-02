#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the list
 * @idx: index position of node
 * @n: list data
 * Return: adress to new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nod;
	listint_t *temp;
	unsigned int c;

	nod = malloc(sizeof(listint_t));

	if (nod == NULL)
		return (NULL);
	nod->n = n;

	if (idx == 0)
	{
		nod->next = *head;
		*head = nod;
		return (nod);
	}

	temp = *head;

	while (c < idx)
	{
		if (temp != NULL)
			temp = temp->next;
		else
			return (NULL);
		c++;
	}

	if (temp != NULL)
	{
		nod->next = temp->next;
		temp->next = nod;
	}
	else
		return (NULL);
	return (nod);

}
