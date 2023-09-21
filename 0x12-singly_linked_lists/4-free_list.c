#include "lists.h"
/**
 * free_list - frees a linked list list_t
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *temp0;

	temp = head;
	while (temp != NULL)
	{
		temp0 = temp->next;
		free(temp->str);
		free(temp);
		temp = temp0;
	}
}
