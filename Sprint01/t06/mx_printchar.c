#include <unistd.h>
#include <string.h>
#include <stdio.h>

void mx_printchar(int c)
{
    char temp[2];
    temp[0] = c;
    temp[1] = '\0';
    write(1, temp, 1);
}  
