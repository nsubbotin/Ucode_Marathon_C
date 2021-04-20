#include "list.h"
#include <stdlib.h>

void mx_pop_back(t_list **list)
{
    t_list *temp = list[0];
    while (temp->next != NULL) temp = temp->next;

    t_list *doubleTemp = list[0];
    while(doubleTemp->next != temp) doubleTemp = doubleTemp->next;

    doubleTemp->next = NULL;
    free(temp);
}
