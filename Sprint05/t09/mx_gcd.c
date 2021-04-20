#include<stdio.h>

int abs(int a){
    return a < 0 ? a * -1 : a;
}

int mx_gcd(int a, int b){
    return b == 0 ? abs(a) : abs(mx_gcd(b, a % b));
}

/*
int main()
{
    printf("%d", mx_gcd(-20, -15));
}
*/
