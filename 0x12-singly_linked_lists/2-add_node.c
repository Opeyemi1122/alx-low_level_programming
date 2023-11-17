#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function prints new node
 * @head: pointer to the first node
 * @str: string
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t count, x;

	newnode = mallow(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->next = *head;
	*head = newnode;
	for (x = 0; str[x] != '\0'; x++)
		count++;
			newnode->len = count;
	return (*head);
}
