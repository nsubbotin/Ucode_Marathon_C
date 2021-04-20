#include <stdio.h>

int abs(int a);
int mx_gcd(int, int);
int mx_lcm(int a, int b){
    return abs(a * b) / mx_gcd(a, b);
}

/*
int main()
{
    printf("%d\n", mx_lcm(20, 15));
    printf("%d\n", mx_lcm(-20, 15));
}
*/
