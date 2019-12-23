#include "lists.h"
/**
 * sum_dlistint - print a list
 *
 *@head: is a pointer
 * Return: On succes 1.
 * On error.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
