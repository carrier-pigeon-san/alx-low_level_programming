#include "lists.h"
/**
 * free_list - frees memory unused by a list
 * @head: head of the list
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
