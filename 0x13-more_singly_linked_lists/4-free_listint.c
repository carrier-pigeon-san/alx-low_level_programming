#include "lists.h"
/**
 * free_listint - frees a linked ljst listint_t
 * @head: pointer to the head of linked list listint_t
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
