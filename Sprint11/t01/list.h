#include <stdlib.h>

typedef struct s_list
{
    void *data;
    struct s_list *next;
} t_list;

t_list *mx_create_node(void*);
t_list *mx_push_front(t_list**, void*);
