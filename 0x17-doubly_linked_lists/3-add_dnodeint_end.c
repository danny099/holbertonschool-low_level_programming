#include "lists.h"
/**
 * add_dnodeint_end - print a list
 *
 *@head: is a double pointer
 *@n: is a const int
 * Return: On succes 1.
 * On error.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head, *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (0);
	}
	node->n = n;
	node->next = NULL;
	if (tmp != NULL)
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		node->prev = tmp;
		tmp->next = node;
	}
	else
	{
		node->prev = NULL;
		*head = node;
	}
	return
		(*head);
}
