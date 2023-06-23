#include "monty.h"
/**
 * f_pint - this func prints the value at the top of the stack
 * @head: parameter with the stack head
 * @counter: this parameter has line_number
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
