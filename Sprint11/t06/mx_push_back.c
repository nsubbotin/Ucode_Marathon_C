#include "list.h"
#include <stdlib.h>

t_list *mx_create_node(void*);
void mx_push_back(t_list **list, void *data)
{
    t_list *node = malloc(sizeof(node));
    if (list == NULL)
    {
        node = mx_create_node(data);
    }
    else
    {
        node->data = data;
        node->next = NULL;
    }

    t_list *temp = list[0];
    while (temp->next != NULL) temp = temp->next;
    temp->next = node;
}
