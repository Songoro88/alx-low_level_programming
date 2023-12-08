#include "lists.h"

/*
 * free_dlistint - frees a linked dlistint_t list.
 * @head: the head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
    /* declare a temporary Node pointer. */
    dlistint_t *tmp;

    while (head)
    {
        /* store the next node in the temporary pointer. */
        tmp = head->next;
        /* free the current node. */
        free(head);
        /* Move to the next node. */
        head = tmp;
    }
}
