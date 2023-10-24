#include "lists.h"

/**
 * add_nodeint - A new node at the beginning of a linked list is added
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int y)
{
	listint_t *new;
 
	new = malloc(sizeof(listint_t));
 	if (!new)
 		return (NULL);
 	new->y = y;
 	new->next = *head;
 	*head = new;
 	return (new);
}
