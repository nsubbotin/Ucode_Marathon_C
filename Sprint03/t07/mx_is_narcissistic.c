#include <stdio.h>
#include <stdbool.h>

double mx_pow(double a, unsigned int b);

bool mx_is_narcissistic(int num){
    int result = 0;
    int a = num;
    int c = 0;
    while (a > 0){
        a /= 10;
        c++;
    }
    a = num;
    while (a > 0){
        result += mx_pow(a % 10, c);
        a /= 10;
    }
    return num == result;
}
