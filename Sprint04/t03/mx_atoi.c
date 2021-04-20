#include <stdio.h>

int mx_atoi(const char *str){
    int r = 0;
    for (int i = 0; str[i] != '\0'; ++i){
        r *= 10;
        r += str[i] - '0';
    }
    return r;
}

/*
int main()
{
    char str[] = "12345";
    printf("%d", mx_atoi(str));
}
*/
