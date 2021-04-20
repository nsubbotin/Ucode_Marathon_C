#include <stdio.h>
#include <time.h>


double mx_timer(void (*f)()){
    clock_t begin = clock();
    f();
    clock_t end = clock();
    return (double) (end - begin)/CLOCKS_PER_SEC;
}

