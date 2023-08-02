#include "lists.h"
/**
 * reverse_listint - reverses a list
 * @head: double pointer to head of the list
 * Return: pointer to first node of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
