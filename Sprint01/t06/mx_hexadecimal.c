#include <unistd.h>
#include <string.h>
#include <stdio.h>

int mx_printchar(const char *s);

void mx_hexadecimal(){
    for (int i = 0; i < 16; i++)
        printf("%X", i);
    printf("\n");
}  
//int main(){
//    mx_hexadecimal();
//}  
