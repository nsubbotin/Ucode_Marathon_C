#include <stdio.h>

void mx_printstr(const char *s);
void mx_is_positive(int i)
{
    mx_printstr(i > 0 ? "positive" : i < 0 ? "negative" : "zero");
}  
