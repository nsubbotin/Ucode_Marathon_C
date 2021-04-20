#include "list.h"

void mx_del_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b))
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

    t_list *current = list[head];
    while (current->next != NULL)
    {
        if (cmp(current->next->data, del_data))
        {
            current->next = current->next->next;
            free(current->next);
        }
        current = current->next;
    }
}
 