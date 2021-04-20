#include <unistd.h>
#include <stdio.h>

int mx_strlen(const char*);
void mx_printerr(const char *s){
    write(2, s, mx_strlen(s));
}

/*
int main(){
    mx_printerr("bish");
}
*/
