#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function to print all elements
 * @h: number of elements
 *
 * Return: number of nodes
 */

	size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
