#include "lists.h"
#include <stddio.h>

/**
 * print_list - print all element of a linked list
 * @h: head of the linked list
 *
 * Return: number of nodes of the linked list
 */

size_t print_list(const list_t *h)
{
	size_t int nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
