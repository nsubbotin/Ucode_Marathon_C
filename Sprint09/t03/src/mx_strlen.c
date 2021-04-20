#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "../inc/minilibmx.h"
int mx_strlen(const char *s){
    int c = 0;
    while(s[c] != '\0')
        c++;
    printf("%d", c);
    return c;
}

int main(){
    mx_strlen("dfd");
}
