#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list listint_t
 * @head: double pointer to head of linked list listint_t
 * @n: heqd->n
 *
 * Return: address of the new element/NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
