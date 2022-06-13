#include "lists.h"

/**
* free_listint2 - frees a linked list
* @head: head of a list.
*
* Return: no return.
*/
void free_listint2(listint_t **head)
{
listint_t *ptr;
listint_t *current;

if (head != NULL)
{
current = *head;
while ((ptr = current) != NULL)
		{
current = current->next;
free(ptr);
}
*head = NULL;
}
}
