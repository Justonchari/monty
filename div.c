#include "monty.h"
/**
 * f_div - this func divides the top two
 * elements of the stack.
 * @head: parameter with stack head
 * @counter: line_number parameter
*/
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *i;
	int len = 0, aux;

	i = *head;
	while (i)
	{
		i = i->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	if (i->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = i->next->n / i->n;
	i->next->n = aux;
	*head = i->next;
	free(i);
}
