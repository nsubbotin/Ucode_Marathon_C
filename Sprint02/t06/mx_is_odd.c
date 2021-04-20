#include <stdbool.h>

bool mx_is_odd(int value)
{
    return value == 0 ? false : abs(value) % 2 == 1;
}
int abs(int value)
{
    return value > 0 ? value : -1 * value;
}
