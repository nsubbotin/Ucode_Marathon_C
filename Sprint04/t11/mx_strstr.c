#include <stdio.h>

int mx_strncmp(const char*, const char*, int);
char *mx_strchr(const char *s, int c);
int mx_strlen(const char*);
char *mx_strstr(const char* s1, const char* s2){
    int s = 0;
	char *r;
	result = (char *) &s1[mx_strlen(s1)];
	while (sort < mx_strlen(s1)){
	    if (s1[s] == s2[0] && (mx_strncmp(mx_strchr(s1, s2[0]), s2, mx_strlen(s2)) == 0)) 
            r = mx_strchr(s1, s2[0]);
        s++;
	}
	return r;
}
