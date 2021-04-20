#include "list.h"

t_list *mx_push_front(t_list**, void*);
void mx_push_back(t_list**, void*);

void mx_push_index(t_list **list, void *data, int index)
{
    if (index < 0 || list == NULL)
    {
        mx_push_front(list, data);
    }
    else 
    { 
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
        while (current->next != NULL && i != index)
        {
            current = current->next;
        }
        if (current->next == NULL)
        {
            mx_push_back(list, data);
        }
        else
        {
            t_list *node = malloc(sizeof(t_list));
            node->data = data;
            node->next = current->next;
            current->next = node;
        }
    }
}   
