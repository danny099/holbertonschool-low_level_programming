#include "lists.h"
/**
 * listint_len - print a list
 *
 *@h: is a pointer
 * Return: On succes 1.
 * On error.
 */
size_t listint_len(const listint_t *h)
{
	int cont = 0;

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
