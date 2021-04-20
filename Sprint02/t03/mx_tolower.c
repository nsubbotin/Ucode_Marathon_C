#include <stdio.h>

int mx_tolower(int c)
{
    return c < 91 ? c + 32 : c;
}
