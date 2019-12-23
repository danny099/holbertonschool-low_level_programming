#include "lists.h"
/**
 * add_dnodeint - print a list
 *
 *@head: is a pointer
 *@n: is a const int
 * Return: On succes 1.
 * On error.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (0);
	}
	node->n = n;
	node->next = *head;
	if (*head != NULL)
		(*head)->prev = node;
	*head = node;
	return (*head);
}
