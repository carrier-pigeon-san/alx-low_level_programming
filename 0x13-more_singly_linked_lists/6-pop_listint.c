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
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	d = temp->n;
	*head = temo->next;
	free(temp);
	return (d);
}
