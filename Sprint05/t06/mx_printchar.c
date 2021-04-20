#include <unistd.h>

void mx_printchar(char c)
{
    char temp[1] = { c };
    write(1, temp, 1);
}
