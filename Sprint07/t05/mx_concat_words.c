#include <stdio.h>

char *mx_strjoin(const char*, const char*);

char *mx_concat_words(char **words){
    char *r = NULL;
    while(*words != NULL){
        r = mx_strjoin(r, *words);
        if (r != NULL)
            r = mx_strjoin(r, " ");
        words++;
    }
    return r;
}

/*
int main(){
    char *words[] = {"Free", "the", "Diretide!", NULL};
    char *text = mx_concat_words(words);
    printf("%s\n", text);
}
*/
