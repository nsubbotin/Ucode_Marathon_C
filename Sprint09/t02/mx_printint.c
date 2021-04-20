#include <stdio.h>

void mx_printchar(int n);

int mx_pow(int a, int b){
    int fine = 1;
    for (int i = 0; i < b; i++)
        fine *= a;
    return fine;
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
        int t = mx_pow(10, c - i - 1);
        mx_printchar((n / t) % 10 + 48);
    }
    mx_printchar('\t');
}
