#include <stdio.h>

char *mx_strchr(const char *s, int c){
    for (int i = 0; s[i] != '\0'; i++){
        if ((char) c == s[i])
            return (char *)&s[i];
    }
    return NULL;
}

/*
int main()
{
 	char s[] = "Hello world";
 	printf("%s\n", mx_strchr(s, 'l'));
}
*/
