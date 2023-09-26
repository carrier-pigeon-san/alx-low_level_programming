#include "lists.h"
/**
 * print_listint - prints all the elements of linked list listint_t
 * @h: pointer to the head of the linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}

	return (i);
}
