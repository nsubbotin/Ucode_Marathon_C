#include <stdio.h>
#include <stdbool.h>

bool mx_is_prime(int);
double mx_pow(double, unsigned int);
bool mx_is_mersenne(int n){
    if (!mx_is_prime(n))
        return false;
    n++;
    while (n > 0){
        if (n % 2 == 1 && n != 1)
            return false;
        n /= 2;
    }
    return true;
}

/*
int main(){
    printf("%d\n", mx_is_mersenne(3));
    printf("%d\n", mx_is_mersenne(11));
    printf("%d\n", mx_is_mersenne(113));
    printf("%d\n", mx_is_mersenne(9845));
    printf("%d\n", mx_is_mersenne(76766));
}
