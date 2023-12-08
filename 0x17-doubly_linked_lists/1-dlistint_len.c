#include "lists.h"

/**
 * dlistint_len - counts the num of elements in a linked dlistint_t list.
 * @h: the head of the dlistint_t list.
 *
 * Return: The num of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
    /*Variable to store the num of elements in the list.*/
    size_t nodes = 0;

    while (h)
    {
        /*Increment the element count.*/
        nodes++;


        /*Move to the next element.*/
        h = h->next;
    }

    /*Return the total number of elements in the list.*/
    return (nodes);
}
