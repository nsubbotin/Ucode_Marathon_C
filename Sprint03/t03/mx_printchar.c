#include <unistd.h>

void mx_printchar(char c)
{
    
    char temp[2];
    temp[0] = c;
    temp[1] = '\0';
    write(1, temp, 1);
}
