#include "monty.h"

/**
 * free_stack - Frees the memory allocated for a stack
 * @stack: Pointer to the top of the stack
 *
 * Return: Nothing
 */
void free_stack(stack_t *stack)
{
	stack_t *current = stack;
	stack_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
