#include "list.h"
#include <stdlib.h>
#include <stdbool.h>

void swap(t_list *item1, t_list *item2)
{
    t_list *target = item1->next;
    item1->next = item2->next;
    item2->next = item1->next;
}

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b))
{
    bool repeat = false;
    t_list *head = list;

    while (list->next != NULL)
    {
        if (cmp(list, list->next)) 
        { 
            if (list == head) head = list->next;
            swap(list, list->next);
            repeat = true;
        }
    }
    if (repeat)
    {
        mx_sort_list(head, cmp);
    }
}
