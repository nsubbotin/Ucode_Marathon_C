#include <stdio.h>
#include <unistd.h>
//На моём компьютере компилит через void
//#include "mx_printchar.c"

void mx_printchar(char c);

int mx_strlen(const char *s){
    int c = 0;
    while (s[c] != '\0')
        c++;
    return c;
}

void mx_str_separate(const char *str, char delim){
    for (int i = 0; i < mx_strlen(str); i++)
        mx_printchar(str[i] == delim ? '\n' : str[i]);
}

int main(){
    mx_str_separate("Hello world", 'l');
}
