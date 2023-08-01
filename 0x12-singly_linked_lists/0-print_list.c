#include "lists.h"
/**
 * print_list - prints all the elements of a list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int nod = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		nod++;
	}
	return (nod);
}
