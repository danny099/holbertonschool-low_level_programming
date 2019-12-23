#include "lists.h"
/**
 * print_dlistint - print a list
 *
 *@h: is a pointer
 * Return: On succes 1.
 * On error.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
