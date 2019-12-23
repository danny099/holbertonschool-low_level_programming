#include "lists.h"
/**
 * dlistint_len - print a list
 *
 *@h: is a pointer
 * Return: On succes 1.
 * On error.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
