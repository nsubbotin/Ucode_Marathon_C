#include <unistd.h>
#include "header.h"
int mx_strlen(const char *s){
    int c = 0;
    while (s[c] != '\0')
        c++;
    return c;
}
