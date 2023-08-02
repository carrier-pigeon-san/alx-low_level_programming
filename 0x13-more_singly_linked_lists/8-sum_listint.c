#include "lists.h"
/**
 * sum_listint - returns sum of all the data(n) of listint_t linked list
 * @head:pointer to the head of the linked list
 *
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *nod;

	if (head != NULL)
	{
		nod = head;
		sum = 0;

		while (nod != NULL)
		{
			sum = sum + nod->n;
			nod = nod->next;
		}


		return (sum);
	}

	return (0);
}
