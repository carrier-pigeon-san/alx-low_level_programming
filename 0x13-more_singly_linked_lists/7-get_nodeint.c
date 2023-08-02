#include "lists.h"
/**
 * get_node_at_index - returns the nth node of a list
 * @head: pointer to the head of the list
 * @index: index of the node starting at 0
 * Return: nth node of the list or NULL if it does not exist
 */
listint_t *get_node_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	int i = 0;

	temp = head;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (i == index)
		return (temp);

	return (NULL);

}
