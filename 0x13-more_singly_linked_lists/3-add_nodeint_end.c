#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of a list
 * @head: head of list - pointer to firsy node
 * @n: list data
 *
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nod;
	listint_t *temp;

	nod = malloc(sizeof(listint_t));
	if (nod == NULL)
	{
		free(nod);
		return (NULL);
	}

	nod->n = n;
	nod->next = NULL;

	if (*head == NULL)
		*head = nod;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = nod;
	}

	return (*nod);
}

