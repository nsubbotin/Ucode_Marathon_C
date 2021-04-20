#include <unistd.h>
#include <string.h>
#include "../inc/minilibmx.h"
void mx_printchar(char c){
    char temp[2];
    temp[0] = c;
    temp[1] = '\0';
    write(1,temp,strlen(temp));
}

int main(){
    mx_printchar('a');
}
