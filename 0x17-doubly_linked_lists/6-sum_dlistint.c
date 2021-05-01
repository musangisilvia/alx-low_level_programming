#include "lists.h"
/**
  * sum_dlistint - returns the sum of all data (n) in the list.
  * @head: pointer to the list.
  *
  * Return: sum of all data.
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
