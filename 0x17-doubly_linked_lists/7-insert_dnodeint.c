#include "lists.h"

/*
 * insert_dnodeint_at_index - inserts a new Node in a dlistint_t
 *                            list at a given position.
 * @h: a pointer to the head of the dlistint_t list.
 * @idx: the position to insert the new node.
 * @n: The int for the new node to contain.
 *
 * Return: If the Function Fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *tmp = *h, *new;

    /* If the index is 0, insert at the beginning of the list. */
    if (idx == 0)
        return (add_dnodeint(h, n));

    /* Search the list to reach the desired position. */
    for (; idx != 1; idx--)
    {
        tmp = tmp->next;
        if (tmp == NULL)
            return (NULL);
    }

    /* If the desired position is at the end, insert at the end of the list. */
    if (tmp->next == NULL)
        return (add_dnodeint_end(h, n));

    /* allocate memory for the new node. */
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    /* set the value of the new node and Update the links. */
    new->n = n;
    new->prev = tmp;
    new->next = tmp->next;
    tmp->next->prev = new;
    tmp->next = new;

    return (new);
}
