#include <stdio.h>

void mx_printint(int);
void mx_printstr(const char*);

int main(int argc, char *argv[]){
    mx_printint(argc);
    for (int c = 1; c < argc; c++)
        mx_printstr(argv[c]);
}
