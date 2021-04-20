#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

bool mx_islower(int);
bool mx_isupper(int);
int mx_tolower(int);
int mx_toupper(int);

int mx_strlen(const char *s){
    int c = 0;
    while (s[c] != '\0')
        c++;
    return c;
}

void mx_reverse_case(char *s){
    for (int i = 0; i < mx_strlen(s); s++){
        char c[1] = {mx_isupper(s[i]) ? mx_tolower(s[i]) : mx_islower(s[i]) ? mx_toupper(s[i]) : s[i]}
        write(1, c, 1);
    }
}
