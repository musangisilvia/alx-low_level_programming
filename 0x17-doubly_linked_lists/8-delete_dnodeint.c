#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes node at index index of list.
  * @head: double pointer to list.
  * @index: index of node to be deleted.
  *
  * Return: 1 if it succeeded, -1 if it failed.
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2, *tp;
	unsigned int len = dlistint_len2(*head);

	if (*head == NULL || len < index)
		return (-1);
	temp = *head;
	if (index == 0 && (*head)->next == NULL)
	{
		free(temp), *head = NULL;
		return (1);
	}
	if (index ==  0 && (*head)->next != NULL)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
	}
	if (index > 0)
	{
		while (index != 0)
			temp = temp->next, index--;
		if (temp->next == NULL)
		{
			tp = *head;
			while (tp->next != NULL)
				tp = tp->next;
			temp2 = tp->prev;
			temp2->next = NULL, free(tp);
			return (1);
		}
		temp2 = temp->prev;
		temp2->next = temp->next;
		temp->next->prev = temp2;
	}
	free(temp);
	return (1);
}

/**
  * dlistint_len2 - returns number of elements in a lineked dlistint_t list.
  * @h: pointer to list.
  *
  * Return: number of elements in list.
  */
unsigned int dlistint_len2(dlistint_t *h)
{
	dlistint_t *temp;
	unsigned int count;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
