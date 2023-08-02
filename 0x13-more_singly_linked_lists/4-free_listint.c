#include "lists.h"
/**
 * free_listint - frees memory unused by a list
 * @head: head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *temp0;

	temp = head;

	while (temp != NULL)
	{
		temp0 = temp->next;
		free(temp);
		temp = temp0;
	}
}
