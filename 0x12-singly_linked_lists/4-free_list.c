#include "lists.h"
/**
 * free_list - frees memory unused by a list
 * @head: head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	while (temp != NULL)
	{
		free = free->next;
		free(temp);
		free(temp->str);
	}
}
