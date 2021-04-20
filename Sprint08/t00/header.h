#include <stdbool.h>
#include <unistd.h>
bool mx_isdigit(int c){
    return c >= 0 && c <= 9;
}
int mx_strcmp(const char *s1, const char *s2){
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2){
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
int mx_strlen(const char *s){
    int c = 0;
    while (s[c] != '\0')
        c++;
    return c;
}
void mx_printchar(char c){
    char t[1] = { c };
    write(1, t, 1);
}
int mx_atoi(const char *str){
    int res = 0;
    int rev = 0;
    for (int i = 0; str[i] != '\0'; ++i){
        int sym = str[i] - '0';
        if (!mx_isdigit(sym)){
            if (i > 0 || str[i] != '-')
                return 0;
            else if (i == 0 && str[i] == '-')
                rev = 1;
        }
        else{
            res *= 10;
            res += sym;
        }
    }
    return rev == 0 ? res : res * -1;
}
char *mx_strcpy(char *dst, const char *src){
    char *s = dst;
    while (*src)
        *dst++ = *src++;
    *dst = 0;
    return s;
}
bool mx_isspace(int c){
    return c == ' ' ||
        c == '\n' ||
        c == '\t' ||
        c == '\v' ||
        c == '\f' || 
        c == '\r';
}
int mx_pow(int a, int b){
    int r = 1;
    for (int i = 0; i < b; i++)
        r *= a;
    return r;
}
void mx_printint(int n){
    int a = n;
    int c = 0;
    if (n < 0){
        mx_printchar('-');
        a *= -1;
        n *= -1;
    }
    while (a > 0){
        a /= 10;
        c++;
    }
    for (int i = 0; i < c; i++){
        int temp = mx_pow(10, c - i - 1);
        mx_printchar((n / temp) % 10 + 48);
    }
    mx_printchar('\n');
}
typedef struct t_student{
    char *name;
    char *surname;
    int age;
} s_student;
