#include "lists.h"
/**
 * free_dlistint - print a list
 *
 *@head: is a pointer
 *@index: is a unigned int
 * Return: On succes 1.
 * On error.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	i = 0;
	tmp = head;
	if (head != NULL)
	{
		while (i < index && tmp)
		{
			tmp = tmp->next;
			i++;
		}
		return (tmp);
	}
	return (0);
}
