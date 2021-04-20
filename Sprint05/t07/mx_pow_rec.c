#include <stdio.h>

double mx_pow_rec(double n, unsigned int pow){
    return pow == 0 ? 1 : n * mx_pow_rec(n, pow - 1);
}

/*
int main()
{
    printf("%f", mx_pow_rec(5, 4));
}
*/
