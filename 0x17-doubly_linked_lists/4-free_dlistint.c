#include "lists.h"
/**
 * free_dlistint - free the list
 * @head: head node
 * Description: frees
 * Return: nothing
*/
void free_dlistint(dlistint_t *head){
    dlistint_t *currentNode;

    while (head != NULL)
    {
        currentNode = head;
        head = head->next;
        free(currentNode);
    }
}
