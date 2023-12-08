#include "lists.h"

/**
 * add_dnodeint - adds a new Node at the beginning of a dlistint_t list.
 * @head: a pointer to the head of the dlistint_t list.
 * @n: The int for the new node to contain.
 *
 * Return: If the Function Fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    /*declare a new node pointer.*/
    dlistint_t *new;

    /*Allocate memory for the new node.*/
    new = malloc(sizeof(dlistint_t));
    /*Check if memory allocation failed.*/
    if (new == NULL)
        /*Return NULL if allocation failed.*/
        return (NULL);

    /* Set the value of the new node to the provided integer.*/
    new->n = n;
    /*Set the previous pointer of the new node to NULL.*/
    new->prev = NULL;
    /* Set the next pointer of the new node to the current head.*/
    new->next = *head;
    /*Check if the list is not empty.*/
    if (*head != NULL)
        /*update the previous pointer of the current head to the new node.
*/
        (*head)->prev = new;
    /*update the head pointer to point to the new node.*/
    *head = new;

    /*return the address of the new node.*/
    return (new);
}
