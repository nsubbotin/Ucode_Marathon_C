#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "../inc/minilibmx.h"
int mx_strlen(const char *s){
    int c = 0;
    while(s[c] != '\0')
        c++;
    return c;
}

void mx_printstr(const char *s){
    write(1, s, mx_strlen(s));
}

int main(){
    mx_printstr("kfk");
}
