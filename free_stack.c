#include "monty.h"

/**
 * free_stack - function to free a doubly linked list
 * @head: the head of the stack
 *
 */
void free_stack(stack_t *head)
{
		stack_t *aux;

		aux = head;
		while (head)
		{
			aux = head->next;
			free(head);
			head = aux;
		}
}
