#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void mx_strdel(char**);
char *mx_strnew(const int);
bool mx_isspace(int);
int mx_strlen(const char*);
char *mx_strtrim(const char *str){
    int c = 0;
    while (mx_isspace(str[c])) c++;
    char *t = mx_strnew(mx_strlen(str) - c);
    for (int i = 0; i < mx_strlen(str) - c; i++)
        t[i] = str[c + i];
    c = mx_strlen(t) - 1;
    while (mx_isspace(t[c])) c--;
    char *r = mx_strnew(c + 1);
    for (int i = 0; i < c + 1; i++)
        r[i] = t[i];
    mx_strdel(&t);
    return r;
}
