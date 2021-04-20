#include "list.h"
#include <stdlib.h>

void mx_pop_front(t_list **list)
{
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
            free(list[i]);
            break;
        }
    }
}
