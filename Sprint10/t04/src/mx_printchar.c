#include <unistd.h>
#include "header.h"
void mx_printchar(char c){
    char t[1] = { c };
    write(1, t, 1);
}
