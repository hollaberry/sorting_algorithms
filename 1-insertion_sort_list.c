#include "sort.h"

/**
 * len_list - returns the length of a linked list
 * @list: pointer to the list
 * Return: length of list
 */

int len_list(listint_t *list)
{
int list_len = 0;

while (list)
{
list_len++;
list = list->next;
}
return (list_len);
}

/**
 * insertion_sort_list - function to implement insertion_sort on a linked list
 * @list: double pointer to the list to sort
 */

void insertion_sort_list(listint_t **list)
{
  listint_t *current = NULL, *first = NULL;
  listint_t *second = NULL, *third =NULL, *fourth = NULL;

  if (!list || !(*list) || len_list(*list) < 2)
    return;

  current = *list;

  while (current)
    {
      if (current->prev && current->n < current->prev->n)
	{
	  first = current->prev->prev;
	  second = current->prev;
	  third = current;
	  fourth = current->next;

	  second->next = fourth;

	  if (fourth)
	    fourth->prev = second;

	  third->next = second;
	  third->prev = first;

	  if (first)
	    first->next = third;
	  else
	    *list = third;
	  second->prev = third;
	  current = *list;
	  print_list(*list);
	  continue;
	}
      else
	current = current->next;
    }
}
