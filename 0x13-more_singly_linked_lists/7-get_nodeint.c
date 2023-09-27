#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of linked list listint_t
 * @head - pointer to head of linked list listint_t
 * @index: self explanatory
 *
 * Return: address of the node at index/NULL if doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	
	temp = head;
	while (i < index)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	return (temp);
}
