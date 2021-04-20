#include <stdio.h>

void mx_arr_rotate(int *arr, int size, int shift){
    int t[shift];
    for (int i = 0; i < size; i++)
        t[i] = arr[(i - shift + shift * size) % size];
    for (int i = 0; i < size; i++)
        arr[i] = t[i];
}

/*
int main(){
    int arr[] = {1, 2, 3, 4, 5 };
    mx_arr_rotate(arr, 5, 11);
    for (int i = 0; i < 5; i++)
        printf("%d\n", arr[i]);
}
*/
