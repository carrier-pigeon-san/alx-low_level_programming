#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of target node
 *
 * Return: address of nth node or Null if does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t counter = 0;

	while (counter < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		counter++;
	}
	return (head);
}
