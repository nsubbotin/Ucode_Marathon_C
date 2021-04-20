#include<stdio.h>

int mx_factorial_rec(int n){
    return n < 0 ? 0 : n == 1 ? 1 : n > 16 ? 0 : n * mx_factorial_rec(n - 1);
}

/*
int main()
{
    printf("%d\n", mx_factorial_iter(-10));
    printf("%d\n", mx_factorial_iter(5));
    printf("%d\n", mx_factorial_iter(120));
}
*/
