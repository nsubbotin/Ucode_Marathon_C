#include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int);
int mx_count_words(const char*, char);
char **mx_strsplit(char const *s, char c){
    char **r = malloc(mx_count_words(s, c));
    printf("%d\n", mx_count_words(s, c));
    int words = 0;
    int starI = -1;
    int endI = -1;

    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] == c){
            if (endI - starI > 0){
                char *temp = malloc(endI - starI + 1);
                for (int j = starI; j < endI + 1; j++)
                    temp[j - starI] = s[j];
                r[words] = temp;
                words++;
                starI = -1;
                endI = -1;
            }
        }
        else{
            if (starI == -1)
                starI = i;
            endI = i;
        }
    }
    return r;
}

/*
int main(){
    char *s = "Knock, knock,    Neo.   ";
    char **arr= mx_strsplit(s, ' ');
    for (int i = 0; i < mx_count_words(s, ' '); i++)
        printf("%s\n", arr[i]);
}
*/
