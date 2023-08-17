#include "lists.h"

/**
 * check_cycle - Checks if a linked list has a cycle
 * Code by ArchibaldTK
 * @list: Pointer to the head of the linked list
 * Return: 0 if no loop is present, 1 if loop is present
 */
int check_cycle(listint_t *list)

{
	listint_t *slow = list;
	listint_t *fast = list;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (1);
	}
	return (0);
}
