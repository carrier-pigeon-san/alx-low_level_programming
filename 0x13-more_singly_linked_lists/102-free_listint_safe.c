#include "lists.h"
/**
 * free_listint_safe - frees memory unused by a list
 * @h: double pointer to the head of the list
 * Return: size of list freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr, *nxt;
	int c = 0;

	curr = *h;
	if (head == NULL)
		return;

	while (curr != NULL)
	{
		nxt = curr->ext;
		free(curr);
		c++;
		curr = nxt;
	}

	*h = NULL;

	return (c);
}
