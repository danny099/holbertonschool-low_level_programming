#include "lists.h"
/**
 * print_listint - print a list
 *
 *@h: is a pointer
 * Return: On succes 1.
 * On error.
 */
size_t print_listint(const listint_t *h)
{
	int cont = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
