#include <stdio.h>

char *mx_strnew(int);
char* mx_nbr_to_hex (unsigned long nbr){
    int c = 0;
    unsigned long temp = nbr;
    while (temp > 0){
        temp /= 16;
        c++;
    }
    if (nbr == 0)
        c = 0;
    char *r = mx_strnew(c);
    for (int i = c - 1; i >= 0; i--){
        int v = nbr % 16;
        r[i] = v < 10 ? v + '0' : v + 'W';
        nbr /= 16;
    }
    return r;
}

/*
int main(){
    printf("%s\n", mx_nbr_to_hex(1000));
}
*/
