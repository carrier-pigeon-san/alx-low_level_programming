#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list listint_t
 * @h: pointer to the head of linked list listint_t
 *
 * Return: number of elements in the linked list/NULL if failed
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
