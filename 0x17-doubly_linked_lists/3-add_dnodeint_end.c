#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: a pointer to the head of the dlistint_t list.
 * @n: The int for the new node to contain.
 *
 * Return: If the Function Fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    /*declare new node pointers.*/
    dlistint_t *new, *last;

    /*allocate memory for the new node.*/
    new = malloc(sizeof(dlistint_t));
    /*Check if memory allocation failed*/
    if (new == NULL)
        /*Return NULL if allocation failed.*/
        return (NULL);

    /*Set the value of the new node to the provided integer.*/
    new->n = n;
    /*Set the next pointer of the new node to NULL.*/
    new->next = NULL;

    /*check if the list is empty.*/
    if (*head == NULL)
    {
        /*Set the previous pointer of the new node to NULL.*/
        new->prev = NULL;
        /*update the head pointer to point to the new node.*/
        *head = new;
        /*Return the address of the new node.*/
        return (new);
    }

    /*Initialize a pointer to traverse the list.*/
    last = *head;
    /*Find the last node in the list.*/
    while (last->next != NULL)
        last = last->next;
    /*Set the next pointer of the last node to the new node.*/
    last->next = new;
    /*Set the previous pointer of the new node to the last node.*/
    new->prev = last;

    /*return the address of the new node.*/
    return (new);
}
