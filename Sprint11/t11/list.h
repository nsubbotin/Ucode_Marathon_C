#include <stdlib.h>
#include <stdbool.h>
typedef struct s_list
{
    void *data;
    struct s_list *next;
} t_list;

void mx_del_node_if(t_list**, void*, bool (*cmp)(void*, void*));
