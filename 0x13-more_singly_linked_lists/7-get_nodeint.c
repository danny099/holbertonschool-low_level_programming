#include "lists.h"
/**
 * get_nodeint_at_index - remove first node
 *
 *@head: is a  pointer
 *@index: is a int
 * Return: On succes 1.
 * On error.
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cont;
	unsigned int i;

	i = 0;
	cont = head;
	if (head != NULL)
	{
		while (cont && i < index)
		{
			cont = cont->next;
			i++;
		}
		return (cont);
	}
	return (0);
}
