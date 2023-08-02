#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of a list
 * @head: head of list - pointer to firsy node
 * @n: list data
 *
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nod;

	nod = malloc(sizeof(listint_t));
	if (nod == NULL)
	{
		free(nod);
		return (NULL);
	}
	nod->n = n;
	nod->next = *head;

	*head = nod;
	return (*nod);
}

