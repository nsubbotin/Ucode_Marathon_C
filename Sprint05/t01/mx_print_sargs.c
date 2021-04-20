#include <stdio.h>

int mx_strcmp(const char*, const char*);
void mx_printstr(const char*);
void mx_printchar(char);

int main(int argc, char *argv[]){
    for (int i = 1; i < argc; i++){
        for (int j = i + 1; j < argc; j++){
            if (mx_strcmp(argv[i], argv[j]) > 0){
                char *c = argv[i];
                argv[i] = argv[j];
                argv[j] = c;
            }
        }
    }

    for (int i = 1; i < argc; i++){
        mx_printstr(argv[i]);
        //mx_printchar('\n');
    }
}
