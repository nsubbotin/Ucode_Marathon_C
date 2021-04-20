#include "list.h"
#include <stdlib.h>

t_list *mx_create_node(void*);
t_list *mx_push_front(t_list **list, void *data)
{
    t_list *node = malloc(sizeof(node));
    if (list == NULL)
    {
        node = mx_create_node(data);
    }
    else
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
                node->data = data;
                node->next = list[i];
                break;
            }
        }
    }
    return node;
}
