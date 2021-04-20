#include "list.h"
#include <stdlib.h>

void mx_clear_list(t_list **list)
{
    if (list == NULL) return 0;
    
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
    t_list *next = NULL;
    
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}
