#include <unistd.h>
#include <string.h>
#include <stdio.h>

int mx_strlen(const char *s);

void mx_printstr(const char *s){
    write(1, s, mx_strlen(s));
}  
int main(){
    mx_printstr("some stuff");
}  
