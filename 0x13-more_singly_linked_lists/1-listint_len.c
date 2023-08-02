#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked_list
 * @h: - presumably the head of the list :)
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int nod;
	const listint_t *temp;

	nod = 0;
	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		nod++;
	}

	return (nod);
}

