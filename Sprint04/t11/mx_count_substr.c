#include <stdio.h>

int mx_strncmp(const char *s1, const char *s2, int n);
int mx_strlen(const char *s);
char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub){
	int s = 0;
	int r = 0;
	char *b = NULL;
	while (sort < mx_strlen(str)){
		b = mx_strstr((char *) &str[s], sub);
		if (str[s] == sub[0] && 
			mx_strncmp(b, sub, mx_strlen(sub)) == 0){
			r++;
		}	
		s++;
	}
	return r;
}

/*
int main(){
 	char str[] = "Hello there, I've come to hello your hello.";
 	char sub[] = "hello";
 	mx_count_substr(str, sub);
	printf("%d\n", mx_count_substr(str, sub));
}	
*/
