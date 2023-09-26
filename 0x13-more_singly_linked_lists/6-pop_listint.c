#include "lists.h"
/**
 * pop_listint - deletes the head node of linked list list_int
 * @head: double pointer to head node of linked list listint_t
 *
 * Return: head->n/0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int d;

	if (*head == NULL)
		return (0);
	d = (*head)->n;
	*head = (*head)->next;
	return (d);
}
