#include "lists.h"

/*
 * insert_node - inserts a new node into a sorted list
 * code by ArchibaldTK
 * @head - is the head of the linkedlist that will be manipulated
 * number - is the data within the new node
 * Return address of new node or NULL on failure
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *tmp;
	listint_t *slow = *head;
	listint_t *curr = (*head) ? (*head)->next: NULL;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);

	tmp->n = number;
	tmp->next = NULL;

	if (!(*head) || number <= (*head)->n)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}

	while(slow && curr)
	{
		if (number < curr->n && number >= slow->n)
		{
			slow->next = tmp;
			tmp->next = curr;
			return (tmp);
		}
		curr = curr->next;
		slow = slow->next;
	}
	/* if node added at the end of list*/
	slow->next = tmp;
	tmp->next = NULL;
	return tmp;
}
