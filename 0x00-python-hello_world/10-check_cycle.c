#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to the head of the list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
    listint_t *tortoise, *hare;

    if (list == NULL || list->next == NULL)
        return (0);

    tortoise = list;
    hare = list->next;

    while (hare != NULL && hare->next != NULL)
    {
        if (hare == tortoise || hare->next == tortoise)
            return (1);

        tortoise = tortoise->next;
        hare = hare->next->next;
    }

    return (0);
}
