#include <unistd.h>
#include <string.h>
#include <stdio.h>
int mx_strlen(const char *s)
{
    int count = 0;
    while (s[count] != '\0')
        count++;
    return count;
}  
void mx_printchar(char c)
{
    char temp[2];
    temp[0] = c;
    temp[1] = '\0';
    write(1, temp, 1);
}
