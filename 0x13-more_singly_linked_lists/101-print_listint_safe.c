#include "lists.h"
/**
 * print_listint_safe - prints all the elements of a list
 * @h: - presumably the head of the list :)
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *h)
{
	int nod;
	const listint_t *temp;

	nod = 0;
	temp = h;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		nod++;
		if (temp < temp->next)
			temp = temp->next;
		else
			break;
	}

	if (temp == NULL)
		return (nod);

	printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);

	exit(98);
}

