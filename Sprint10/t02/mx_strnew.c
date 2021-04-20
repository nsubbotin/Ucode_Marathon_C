#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mx_strnew(const int size){
    char *str = malloc((size + 1));
    for (int i = 0; i < size; i++)
        str[i] = '\0';
    if (str == NULL)
        return NULL;
    return str;
}
