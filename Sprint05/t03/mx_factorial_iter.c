#include<stdio.h>

int mx_factorial_iter(int n){
    int r = 1;
    if (n < 1) return 0;
    for (int i = 1; i <= n; i++){
        if (2147483647 / i < r) return 0;
        r *= i;
    }

    return r;
}

/*
int main()
{
    printf("%d\n", mx_factorial_iter(2));
    printf("%d\n", mx_factorial_iter(5));
    printf("%d\n", mx_factorial_iter(160));
}
*/
