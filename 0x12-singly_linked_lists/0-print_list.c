#include "main.h"

/**
 * print_list - prints the elements of a singly linked list
 * @h: pointer to head node
 *
 * Return: size_t
 */

size_t print_list(const list_t h*)
{
	size_t count = 0;
	const list_t *current = h;

	while(current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}

		count++;
		current = current->next;
	}

	return count;
}
