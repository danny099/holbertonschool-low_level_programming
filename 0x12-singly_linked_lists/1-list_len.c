#include "lists.h"
/**
 * list_len - lenght list
 *
 *@h: is a pointer
 * Return: On succes 1.
 * On error.
 */
size_t list_len(const list_t *h)
{
	int cont = 0;

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
