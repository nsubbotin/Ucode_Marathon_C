#include <stdio.h>
#include <stdlib.h>


int *mx_copy_int_arr(const int *src, int size){
    if (src == NULL) return NULL;
    int *c = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
        c[i] = src[i];
    return c;
}

/*
int main(){
    int arr[] = {1, 2, 3};
    int *copy = mx_copy_int_arr(arr, 3);
    for (int i = 0; i < 3; i++)
        printf("%d\t\n", copy[i]);
}
*/
