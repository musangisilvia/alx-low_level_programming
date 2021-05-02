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
	dlistint_t *temp, *temp2;
 /* if *head is null, nothing to free */
	if (*head == NULL)
		return (0);
/* if *head ->next is null, only one node in list*/
	if ((*head)->next == NULL)
	{
		temp = *head;
		*head = NULL;
		free(temp);
		return (1);
	}
/* traverse the list checking for index given */
	temp = *head;
	if (index == 0 && (*head)->next != NULL)
	{
		*head = (*head)->next;
		temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	while (index != 0 && temp)
	{
		temp = temp->next;
		index--;
	}
	temp2 = temp->prev;
	temp2->next = temp->next;
	temp->next->prev = temp2;
	free(temp);
	return (1);
}
