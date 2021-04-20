#include <stdio.h>
int mx_strlen(const char*);
void mx_swap_char(char*, char*);

void mx_str_reverse(char *s){
    for (int i = 0; i < mx_strlen(s)/2; i++)
        mx_swap_char(&s[i], &s[mx_strlen(s) - 1 -i]);   
}

/* 
int main(){
    char str[] = "Hello hell";
    mx_str_reverse(str);
    printf("%s", str);
}*/
