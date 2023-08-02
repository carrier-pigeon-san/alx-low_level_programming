#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: - presumably the head of the list :)
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nod;
	listint_t *temp;

	nod = 0;
	temp = head;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nod++;
	}

	return (nod);
}

