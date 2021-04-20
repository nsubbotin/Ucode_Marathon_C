#include <stdio.h>

char* mx_nbr_to_hex (unsigned long nbr);
int mx_strlen(const char*);
char *mx_strnew(const int);

char *mx_get_address(void *p){
    char *h = mx_nbr_to_hex(*(unsigned long*)p);
    char *r = mx_strnew(mx_strlen(h + 2));
    r[0] = '0';
    r[1] = 'x';
    int i = 0;
    for (i = 0; h[i] != '\0'; i++)
        r[i + 2] = h[i];
    r[i + 2] = '\0';
    return r;
}

/*
int main()
{
    void *p = "hi";
    printf("%s\n", mx_get_address(p));
}
*/
