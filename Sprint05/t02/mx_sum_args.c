#include <stdio.h>

int mx_atoi(const char*);
void mx_printint(int);
void mx_printchar(char);

int main(int argc, char *argv[]){
    int r = 0;
    for (int i = 1; i < argc; i++)
        r += mx_atoi(argv[i]);
    if (argc > 0)   
        mx_printint(r);
}
