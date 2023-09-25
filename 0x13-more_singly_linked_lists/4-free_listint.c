#include "lists.h"

/**
 * free_listint - Frees a list linked
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
 listint_t *temp;
 while (head)
 {
 temp = head->next;
 free(head);
 head = temp;
 }
}
