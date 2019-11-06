#include "lists.h"
/**
 * sum_listint - sum all the list
 *
 *@head: is a  pointer
 * Return: On succes 1.
 * On error.
 */


int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head != NULL)
	{
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}
	return (sum);
}
