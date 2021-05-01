#include "lists.h"
/**
  * dlistint_len - returns number of elements in a lineked dlistint_t list.
  * @h: pointer to list.
  *
  * Return: number of elements in list.
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
