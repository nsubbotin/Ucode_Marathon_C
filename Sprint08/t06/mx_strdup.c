#include <stdio.h>

int mx_strlen(const char*);
char *mx_strnew(const int);

char *mx_strdup(const char *str){
    char *Str = mx_strnew(mx_strlen(str));
    for (int i = 0; i < mx_strlen(str); i++){
        Str[i] = str[i];
    }
    return Str;
}
