#include <stdio.h>

char *mx_strnew(int);
char* mx_nbr_to_hex (unsigned long nbr){
    int c = 0;
    unsigned long t = nbr;
    while (t > 0){
        t /= 16;
        c++;
    }
    if (nbr == 0){
        c = 0;
    }

    char *r = mx_strnew(c);

    for (int i = c - 1; i >= 0; i--){
        int v = nbr % 16;
        r[i] = v < 10 ? v + '0' : v + 'W';
        nbr /= 16;
    }
    r[c] = '\0';
    return r;
}
