#include <unistd.h>
#include <string.h>
#include <stdio.h>

int mx_printchar(const char *s);

void mx_only_printable(){
    char s[] = "some stuff";
    for (int i = 0; i < mx_strlen(s); i++)
        mx_printchar(s[mx_strlen(s) - i - 1]);
    mx_printchar('\n');
}  
//int main(){
//    mx_only_printable();
//}  
