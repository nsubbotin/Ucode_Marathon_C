#include <stdio.h>

int mx_count_words(const char *str, char delimeter){
    int c = str[0] == '\0' || str[0] == delimeter ? 0 : 1;
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

/*
int main()
{
    char str[] = "  follow  *      the  white rabbit ";
    printf("%d\n", mx_count_words(str, '*')); 
    printf("%d\n", mx_count_words(str, ' '));
}
*/
