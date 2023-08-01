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
		if (new->str == NULL)
			printf("[%d] %s", 0, "(ni;)");
		else
			printf("[%d] %s", new->len, new->str);
		nod++;
	}
	return (nod);
}
