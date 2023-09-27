#include "lists.h"
/**
 * sum_listint - returns the sum of all the data(n) of linked list listint_t
 * @head: pointer to head of linked list listint_t
 *
 * Return: Sum of data(n) of listint_t/0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;
	do {
		sum += temp->n;
		temp = temp->next;
	} while (temp != NULL);
	return (sum);
}
