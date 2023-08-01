#include "lists.h"
/**
 * list_len - returns the number of elements in a list
 * @h: head of the list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int nod = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		nod++;
	}
	return (nod);
}
