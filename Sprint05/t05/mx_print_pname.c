#include <stdio.h>

void mx_printstr(const char*);
void mx_printchar(char);
int mx_strlen(const char*);

int main(int argc, char *argv[]){
    int index = 0;
    for (int i = 0; i < mx_strlen(argv[argc - argc]); i++)
        if (argv[argc - argc][i] == '/') index = i;
    for (int i = index + 1; i < mx_strlen(argv[argc - argc]); i++)
        mx_printchar(argv[argc - argc][i]);
    mx_printchar('\n');
}
