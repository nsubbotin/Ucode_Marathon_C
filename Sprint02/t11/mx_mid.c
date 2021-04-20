#include <stdbool.h>

int mx_mid(int a, int b, int c)
{
    return a > b ? (a > c ? c : a) : (b > c ? c : b);
}
