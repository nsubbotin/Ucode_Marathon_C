#include "list.h"
#include <stdlib.h>

void mx_pop_front(t_list**);
void mx_pop_back(t_list**);

void mx_pop_index(t_list **list, int index)
{
    if (list == NULL) return;

    int head = 0;
    for (int i = 0; list[i] != NULL; i++)
    {
        int match = 0;
        for (int j = i; list[j] != NULL; j++)
        {
            if (list[j]->next == list[i])
            {
                match = 1;
                break;
            }
        }
        if (match == 0)
        {
            head = i;
            break;
        }
    }

    if (index < 0)
    {
        mx_pop_front(list);
        return;
    }

    t_list *current = list[head];
    int i = 0;
    if (current->next == NULL)
    {
        mx_pop_back(list);
        return;
    }

    while ((current->next)->next != NULL && i != index)
    {
        current = current->next;
        i++;
    }

    if ((current->next)->next == NULL)
    {
        mx_pop_back(list);
        return;
    }
    
    t_list *target = (current->next)->next;
    free(current->next);
    current->next = target;
}
