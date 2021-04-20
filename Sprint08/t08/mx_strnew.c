#include <stdlib.h>

char *mx_strnew(const int size){
    char *s = malloc((size + 1));
    for (int i = 0; i < size; i++)
        s[i] = '\0';
    if (s == NULL)
        return NULL;
    return s;
}
