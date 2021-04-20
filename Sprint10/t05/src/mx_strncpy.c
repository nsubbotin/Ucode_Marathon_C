#include <stdio.h>
#include "minilibmx.h"
char *mx_strncpy(char *dst, const char *src, int len){
    for (int i = 0; i < len; i++)
        dst[i] = src[i];
    return dst;
}

/*
int main()
{
    char src[17] = "oh my fucking god";
    char dst[17];
    mx_strncpy(dst, src, 4);
    printf("%s\n", dst);
}
*/
