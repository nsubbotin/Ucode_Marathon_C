#include <stdlib.h>

typedef struct s_list
{
    void *data;
    struct s_list *next;
} t_list;

t_list *mx_sort_list(t_list *, bool (*cmp)(void*, void*));
