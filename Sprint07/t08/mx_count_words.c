#include <stdio.h>

int mx_count_words(const char *str, char delimeter){
    int c = 0;
    int l = 0;
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == delimeter){
            if (l > 0) c++;
            l = 0;
        }
        else 
            l++;
    }
    return c;
}
