#include "lists.h"
/**
 * print_list - print a list
 *
 *@h: is a pointer
 * Return: On succes 1.
 * On error.
 */
size_t print_list(const list_t *h)
{
	int cont = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else 
		{
			printf("[0] (nil)\n");
		}	
		h = h->next;
		cont++;
	}
	return (cont);
}
