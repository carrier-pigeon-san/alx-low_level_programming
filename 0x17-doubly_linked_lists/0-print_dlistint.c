#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		number_of_nodes++;
		temp = temp->next;
	}
	
	return (number_of_nodes);
}
