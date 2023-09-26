#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a linked list listint_t
 * @head: double pointer to the head of linked list listint_t
 * @n: head->n
 *
 * Return: address to the new element/NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *node;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		node = *head;
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = temp;
	}
	return (temp);
}
